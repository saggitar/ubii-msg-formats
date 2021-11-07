"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import builtins
import google.protobuf.descriptor
import google.protobuf.internal.containers
import google.protobuf.internal.enum_type_wrapper
import google.protobuf.message
import typing
import typing_extensions
import ubii.proto.dataStructure.vector2_pb2

DESCRIPTOR: google.protobuf.descriptor.FileDescriptor = ...

class TouchEvent(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    class TouchEventType(_TouchEventType, metaclass=_TouchEventTypeEnumTypeWrapper):
        pass
    class _TouchEventType:
        V = typing.NewType('V', builtins.int)
    class _TouchEventTypeEnumTypeWrapper(google.protobuf.internal.enum_type_wrapper._EnumTypeWrapper[_TouchEventType.V], builtins.type):
        DESCRIPTOR: google.protobuf.descriptor.EnumDescriptor = ...
        TOUCH_START = TouchEvent.TouchEventType.V(0)
        TOUCH_MOVE = TouchEvent.TouchEventType.V(1)
        TOUCH_END = TouchEvent.TouchEventType.V(2)

    TOUCH_START = TouchEvent.TouchEventType.V(0)
    TOUCH_MOVE = TouchEvent.TouchEventType.V(1)
    TOUCH_END = TouchEvent.TouchEventType.V(2)

    TYPE_FIELD_NUMBER: builtins.int
    POSITION_FIELD_NUMBER: builtins.int
    ID_FIELD_NUMBER: builtins.int
    FORCE_FIELD_NUMBER: builtins.int
    type: global___TouchEvent.TouchEventType.V = ...
    @property
    def position(self) -> ubii.proto.dataStructure.vector2_pb2.Vector2: ...
    id: typing.Text = ...
    force: builtins.float = ...
    def __init__(self,
        *,
        type : global___TouchEvent.TouchEventType.V = ...,
        position : typing.Optional[ubii.proto.dataStructure.vector2_pb2.Vector2] = ...,
        id : typing.Text = ...,
        force : builtins.float = ...,
        ) -> None: ...
    def HasField(self, field_name: typing_extensions.Literal["position",b"position"]) -> builtins.bool: ...
    def ClearField(self, field_name: typing_extensions.Literal["force",b"force","id",b"id","position",b"position","type",b"type"]) -> None: ...
global___TouchEvent = TouchEvent

class TouchEventList(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    ELEMENTS_FIELD_NUMBER: builtins.int
    @property
    def elements(self) -> google.protobuf.internal.containers.RepeatedCompositeFieldContainer[global___TouchEvent]: ...
    def __init__(self,
        *,
        elements : typing.Optional[typing.Iterable[global___TouchEvent]] = ...,
        ) -> None: ...
    def ClearField(self, field_name: typing_extensions.Literal["elements",b"elements"]) -> None: ...
global___TouchEventList = TouchEventList