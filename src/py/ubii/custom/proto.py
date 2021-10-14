# pylint: disable=wildcard-import, unused-wildcard-import
"""
This module provides easy access to the google protobuf messages.
It makes use of python stubs generated by the protoc compiler and mypy-protobuf

"""
import dataclasses
import importlib
import json
import logging
from json import JSONEncoder
from functools import wraps
from abc import ABCMeta, abstractmethod
from google.protobuf.json_format import Parse, ParseDict, MessageToDict, MessageToJson, ParseError
from google.protobuf.message import Message

from typing import Union, Dict, Any, Generic, TypeVar, Type, overload, List
from proto import *
from ubii.util.constants import MSG_TYPES

log = logging.getLogger(__name__)

GPM = TypeVar('GPM', bound=Message)
PMF = TypeVar('PMF', bound='ProtoMessageFactory')
T = TypeVar("T")
CONVERTIBLE = Union[str, Dict[str, Any], bytes, 'Proto']
ALWAYS_USE_INTEGERS_FOR_ENUMS = True
INCLUDE_DEFAULT_FIELDS = True


class ProtoMessageFactory(Generic[GPM], metaclass=ABCMeta):
    """
    Abstract Base Class for Protomessage Factories.
    Each subclass can define their own way to create protomessages via the `create` method, as well as
    additional behaviour as needed.

    Further subclassing is needed, subclasses need to define their own PREFIX.

    Examples are: :class:`~ubii_interact.util.translators.Translator`
    """
    __types = {}
    proto: Type[GPM] = None

    @classmethod
    def get_type(cls: Type[PMF], base: Type[GPM]) -> 'PMF[GPM]':
        """
        This method can be called by subclasses to create a new Factory for a specified
        base protomessage type. The factory needs to produce messages of the appropriate type,
        by implementing the `create` method in the subclass.

        :param base: a protomessage type
        :return: a subclass of the class calling `get_type`, with `.proto` attribute set to the base parameter.
        """
        name = f"{cls.__name__}{base.__name__}"
        return cls.__types.setdefault(name, type(name, (cls,), {}, proto=base))

    def __init_subclass__(cls, proto=None, **kwargs):
        super().__init_subclass__(**kwargs)
        cls.proto = proto

    @classmethod
    @abstractmethod
    def create(cls, *args, **kwargs) -> GPM:
        raise NotImplementedError("You need to overwrite the 'create' method to create objects"
                                  "of the type specified by the classes `.proto` attribute.")



@wraps(json.dumps)
def serialize(*args, **kwargs):
    """
    This function calls `json.dumps` with `Translator.ProtoEncoder` as optional `cls` argument.
    This tells the json module to use this encode when trying to serialzze the message.
    """
    try:
        result = json.dumps(*args, cls=Translator.ProtoEncoder, **kwargs)
    except Exception as e:
        raise e
    else:
        return result


class Translator(ProtoMessageFactory[GPM]):
    """
    A Translator is a factory for Proto messages. In addition to a `create` method, it provides
    several other means of converting json, python dictionaries and proto messages back and forth.
    It uses the `Parse`, `ParseFromString`, `ParseDict` and `ParseJson` methods from the protobuf library.
    """
    class ProtoEncoder(JSONEncoder):
        """
        Custom encoder to convert Protobuf Messages and Ubii Messages to valid json
        """
        def default(self, o):
            try:
                return Translator.to_dict(o)
            except Exception:
                pass

            return JSONEncoder.default(self, o)

    @classmethod
    @wraps(Message.ParseFromString)
    def from_bytes(cls, obj, *args, **kwargs) -> GPM:
        p = cls.proto()
        p.ParseFromString(obj, *args, **kwargs)
        return p

    @classmethod
    @wraps(Parse)
    def from_json(cls, obj, *args, **kwargs) -> GPM:
        try:
            return Parse(obj, cls.proto(), *args, **kwargs)
        except AttributeError as e:
            raise ParseError(f"Can't parse as json: {e}") from e

    @classmethod
    @wraps(ParseDict)
    def from_dict(cls, obj, *args, **kwargs) -> GPM:
        """
        We need to accept dictionaries with CamelCase keys (because the
        REST Server replies with accordingly formatted json) as well as
        keys that are the exact proto field names.

        We also want to allow dictionaries of "mixed" format,
        containing initialized protobuf objects as well as message representations
        using plain python types.

        Creating proto messages with keyword attributes only works with
        the exact proto field names, and using ParseDict does not support
        nesting already initialized protobuf objects (only plain python),
        so we combine both methods to get a nice API.

        :param obj: a dictionary
        :param args: possible positional arguments for ParseDict
        :param kwargs: keyword arguments for ParseDict or the protobuf message __init__ method.
        :return: valid protobuf message
        """
        try:
            obj = cls.proto(**obj, **kwargs)
            if args:
                log.debug(f"Ignored arguments {', '.join(args)} when parsing {obj}")
            return obj
        except (ValueError, TypeError):
            return ParseDict(obj, cls.proto(), *args, **kwargs)

    @classmethod
    @wraps(MessageToDict)
    def to_dict(cls, message: GPM,
                use_integers_for_enums=ALWAYS_USE_INTEGERS_FOR_ENUMS,
                including_default_value_fields=INCLUDE_DEFAULT_FIELDS,
                **kwargs) -> Dict:
        return MessageToDict(message,
                             use_integers_for_enums=use_integers_for_enums,
                             including_default_value_fields=including_default_value_fields,
                             **kwargs)

    @classmethod
    @wraps(MessageToJson)
    def to_json(cls, message: GPM,
                use_integers_for_enums=ALWAYS_USE_INTEGERS_FOR_ENUMS,
                including_default_value_fields=INCLUDE_DEFAULT_FIELDS,
                **kwargs) -> str:
        return MessageToJson(message,
                             use_integers_for_enums=use_integers_for_enums,
                             including_default_value_fields=including_default_value_fields,
                             **kwargs)
    @overload
    @classmethod
    def convert_to_message(cls, obj: CONVERTIBLE, *args, **kwargs) -> GPM: ...

    @overload
    @classmethod
    def convert_to_message(cls, obj: List[CONVERTIBLE], *args, **kwargs) -> List[GPM]: ...

    @classmethod
    def convert_to_message(cls, obj, *args, **kwargs):
        """
        Tries to use the right conversion based on the type of the supplied object.

        :param obj: dictionary or json formatted string
        """
        if not cls.proto:
            raise NotImplementedError
        try:
            if isinstance(obj, bytes):
                return cls.from_bytes(obj, *args, **kwargs)
            if isinstance(obj, dict):
                return cls.from_dict(obj, *args, **kwargs)
            elif isinstance(obj, str):
                return cls.from_json(obj, *args, **kwargs)
            elif dataclasses.is_dataclass(obj) and not isinstance(obj, type):
                return cls.from_dict(dataclasses.asdict(obj))
            elif isinstance(obj, list):
                return [cls.convert_to_message(o, *args, **kwargs) for o in obj]
            else:
                raise ParseError(f"Type {type(obj).__name__} is not supported. Use dictionaries or json formatted strings.")
        except Exception as e:
            log.exception(e)
            raise

    @classmethod
    @wraps(from_dict)
    def create(cls, **kwargs) -> GPM:
        """
        Implementation of abstract create method from `ProtoMessageFactory`.
        """
        return cls.from_dict(kwargs)

    @staticmethod
    def generate_translator(datatype: str) -> 'Translator':
        """
        The .proto files declare a package name 'ubii', but this is not reflected in the python package.
        Instead the package is named proto, since the name is defined by directory structure, see
        https://developers.google.com/protocol-buffers/docs/reference/python-generated#package

        :param datatype:
        :return:
        """
        if not datatype.startswith('ubii.'):
            log.debug(f"Type {datatype} is not a protobuf type.")
        else:
            return Translator.get_type(importlib.import_module())()

    @classmethod
    def validate(cls, message):
        """
        The `Parse` method from the protobuf library is case sensitive, which means fields that are used in
        the json string have to exactly match the fields from the protobuf definition. Sadly the javascript library
        does not care, and therefore it is difficult to track down cases where a javascript node returns valid
        json except for using the wrong case.
        We can avoid this problem if we push the json through our conversion pipeline.
        `ALWAYS_USE_INTEGERS_FOR_ENUMS` and `INCLUDE_DEFAULT_FIELDS` are constants from this module which
        define how the `to_dict` and `to_json` methods are supposed to handle ambiguous format choices.

        This method converts the message to a dictionary (respecting the previously mentioned constants), and then
        back to a python protobuf object.

        :param message:
        :return:
        """
        if isinstance(message, cls.proto):
            return message
        try:
            return cls.from_json(message)
        except ParseError:
            return cls.from_json(serialize(message))


class _ProtoTranslators(MSG_TYPES.__class__):
    """
    This class extends the `MSG_TYPES` constants (which represent relative imports for protobuf message types).

    The result is a dataclass which uses the same attribute names, with the difference that the values are not
    just string for relative imports, but fully initialized `Translator` objects for the correct message type.

    Note: Type hinting seems to work, and the Translators should have the correct generic Type applied, but
    hinting might still produce different results depending on your IDE / editor and python version.
    """
    ERROR: Translator[Error]
    SUCCESS: Translator[Success]
    SERVER: Translator[Server]
    CLIENT: Translator[Client]
    CLIENT_LIST: Translator[ClientList]
    DEVICE: Translator[Device]
    DEVICE_LIST: Translator[DeviceList]
    COMPONENT: Translator[Component]
    COMPONENT_LIST: Translator[ComponentList]
    TOPIC_MUX: Translator[TopicMux]
    TOPIC_MUX_LIST: Translator[TopicMuxList]
    TOPIC_DEMUX: Translator[TopicDemux]
    TOPIC_DEMUX_LIST: Translator[TopicDemuxList]
    SERVICE: Translator[Service]
    SERVICE_LIST: Translator[ServiceList]
    SERVICE_REQUEST: Translator[ServiceRequest]
    SERVICE_REPLY: Translator[ServiceReply]
    SERVICE_REUEST_TOPIC_SUBSCRIPTION: Translator[TopicSubscription]
    SESSION: Translator[Session]
    SESSION_LIST: Translator[SessionList]
    SESSION_IO_MAPPING: Translator[IOMapping]
    PM: Translator[ProcessingModule]
    PM_LIST: Translator[ProcessingModuleList]
    PM_MODULE_IO: Translator[ModuleIO]
    PM_PROCESSING_MODE: Translator[ProcessingMode]
    TOPIC_DATA: Translator[TopicData]
    TOPIC_DATA_RECORD: Translator[TopicDataRecord]
    TOPIC_DATA_RECORD_LIST: Translator[TopicDataRecordList]
    TOPIC_DATA_TIMESTAMP: Translator[Timestamp]
    DATASTRUCTURE_BOOL_LIST: Translator[BoolList]
    DATASTRUCTURE_INT32_LIST: Translator[Int32List]
    DATASTRUCTURE_STRING_LIST: Translator[StringList]
    DATASTRUCTURE_FLOAT_LIST: Translator[FloatList]
    DATASTRUCTURE_DOUBLE_LIST: Translator[DoubleList]
    DATASTRUCTURE_COLOR: Translator[Color]
    DATASTRUCTURE_IMAGE: Translator[Image2D]
    DATASTRUCTURE_IMAGE_LIST: Translator[Image2DList]
    DATASTRUCTURE_KEY_EVENT: Translator[KeyEvent]
    DATASTRUCTURE_MATRIX_3X2: Translator[Matrix3x2]
    DATASTRUCTURE_MATRIX_4X4: Translator[Matrix4x4]
    DATASTRUCTURE_MOUSE_EVENT: Translator[MouseEvent]
    DATASTRUCTURE_OBJECT2D: Translator[Object2D]
    DATASTRUCTURE_OBJECT2D_LIST: Translator[Object2DList]
    DATASTRUCTURE_OBJECT3D: Translator[Object3D]
    DATASTRUCTURE_OBJECT3D_LIST: Translator[Object3DList]
    DATASTRUCTURE_POSE2D: Translator[Pose2D]
    DATASTRUCTURE_POSE3D: Translator[Pose3D]
    DATASTRUCTURE_QUATERNION: Translator[Quaternion]
    DATASTRUCTURE_TOUCH_EVENT: Translator[TouchEvent]
    DATASTRUCTURE_VECTOR2: Translator[Vector2]
    DATASTRUCTURE_VECTOR3: Translator[Vector3]
    DATASTRUCTURE_VECTOR4: Translator[Vector4]
    DATASTRUCTURE_VECTOR8: Translator[Vector8]

    def __init__(self):
        """
        We just generate Translator objects from the relative import string on initialization.
        """
        for field in dataclasses.fields(super()):
            translator = Translator.generate_translator(field.default)
            object.__setattr__(self, field.name, translator)


Translators = _ProtoTranslators()


class Proto(Generic[GPM]):
    """
    Python classes / types for protobuf messages are generated dynamically from the compiler, and thus are
    not suitable for inheritance. This also explicitly noted by the protobuf documentation.
    Still, we need to have a datatype which behaves like a protobuf message when we want to, but can also
    have additional behaviour. This allows us to write code in python using the same idioms as in .js, which
    makes it easier to port existing code and transfer knowledge between languages.

    The `Proto` class is a generic wrapper for actual Protobuf Messages.
    Since it should behave like the real thing, it exposes all relevant methods and sttributes
    from the wrapped protobuf message using the `ProtoProperty` python descriptor.

    This generic class needs to be subclassed. The subclass sets the `translator` class attribute,
    which tells the wrapper which message type it is supposed to handle. It also needs to define
    `ProtoProperty` attributes for everything it wants to expose that is specific to the message format, like
    message fields and so on.
    When subclassing, the `translator` attribute and it's internal reference to the protobuf message type is used
    to warn the user about attributes and enum types which are expected but not exposed.
    """
    mangled_proto_name = '_Proto__proto'
    __types = {}

    # this needs to be assigned to an actual translator when subclassing
    translator: Translator[GPM] = None

    def __init_subclass__(cls, *args, translator=None, **kwargs):
        """
        Performs all the necessary checks to make sure every expected name is exposed .i.e. the
        wrapper acts just like the wrapped message.

        :param args:
        :param kwargs:
        :return:
        """
        super().__init_subclass__(*args, **kwargs)
        if not translator and not cls.translator:
            raise AttributeError(f"When you subclass {Proto} in {cls} you need to "
                                 f"define {cls.__name__}.proto or pass the `proto` argument")

        if translator and cls.translator:
            raise AttributeError(f"When you subclass {Proto} in {cls} you "
                                 f"can't both define {cls.__name__}.translator and translator={translator}")

        cls.translator = translator or cls.translator

    def __new__(cls, *bases, **attributes):
        """
        When creating new objects, the internal protobuf message object is created using the translator
        :param bases:
        :param attributes:
        """
        instance = super().__new__(cls)
        setattr(instance, cls.mangled_proto_name, cls.translator.create())
        return instance

    @classmethod
    async def create(cls, **kwargs):
        """
        `Proto` objects often need to asynchronously initialize fields. Since `__init__` can not be async,
        we use an async factory class method. All async initialization code should go into `_async_init`.

        :param kwargs:
        :return:
        """
        instance = cls(**kwargs)
        return await instance.async_init()

    @abstractmethod
    async def async_init(self):
        raise NotImplementedError("Override this method for asynchronous initialization")

    def __getattr__(self, item):
        proto = getattr(self, self.mangled_proto_name)
        if hasattr(proto, item):
            return getattr(proto, item)

        raise AttributeError(f"{self} has no attribute {item}")

    def __setattr__(self, key, value):
        proto = getattr(self, self.mangled_proto_name)
        if not hasattr(proto, key):
            return super().__setattr__(key, value)

        try:
            setattr(proto, key, value)
        except Exception as e:
            print("")

    @classmethod
    def get_type(cls, base:  T) -> T:
        name = f"{cls.__name__}{base.__name__}"
        return cls.__types.setdefault(name, type(name, (cls,), {}, translator=base.DESCRIPTOR.full_name))


ProcessingModule = Proto.get_type(ProcessingModule)
Client = Proto.get_type(Client)
Server = Proto.get_type(Server)
