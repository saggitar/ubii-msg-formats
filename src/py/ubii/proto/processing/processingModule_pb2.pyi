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

DESCRIPTOR: google.protobuf.descriptor.FileDescriptor = ...

class ProcessingMode(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    class Frequency(google.protobuf.message.Message):
        DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
        HERTZ_FIELD_NUMBER: builtins.int
        hertz: builtins.int = ...
        def __init__(self,
            *,
            hertz : builtins.int = ...,
            ) -> None: ...
        def ClearField(self, field_name: typing_extensions.Literal["hertz",b"hertz"]) -> None: ...

    class Lockstep(google.protobuf.message.Message):
        DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
        PROCESS_REQUEST_ENDPOINT_FIELD_NUMBER: builtins.int
        process_request_endpoint: typing.Text = ...
        def __init__(self,
            *,
            process_request_endpoint : typing.Text = ...,
            ) -> None: ...
        def ClearField(self, field_name: typing_extensions.Literal["process_request_endpoint",b"process_request_endpoint"]) -> None: ...

    class TriggerOnInput(google.protobuf.message.Message):
        DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
        MIN_DELAY_MS_FIELD_NUMBER: builtins.int
        ALL_INPUTS_NEED_UPDATE_FIELD_NUMBER: builtins.int
        min_delay_ms: builtins.int = ...
        all_inputs_need_update: builtins.bool = ...
        def __init__(self,
            *,
            min_delay_ms : builtins.int = ...,
            all_inputs_need_update : builtins.bool = ...,
            ) -> None: ...
        def ClearField(self, field_name: typing_extensions.Literal["all_inputs_need_update",b"all_inputs_need_update","min_delay_ms",b"min_delay_ms"]) -> None: ...

    FREQUENCY_FIELD_NUMBER: builtins.int
    LOCKSTEP_FIELD_NUMBER: builtins.int
    TRIGGER_ON_INPUT_FIELD_NUMBER: builtins.int
    @property
    def frequency(self) -> global___ProcessingMode.Frequency: ...
    @property
    def lockstep(self) -> global___ProcessingMode.Lockstep: ...
    @property
    def trigger_on_input(self) -> global___ProcessingMode.TriggerOnInput: ...
    def __init__(self,
        *,
        frequency : typing.Optional[global___ProcessingMode.Frequency] = ...,
        lockstep : typing.Optional[global___ProcessingMode.Lockstep] = ...,
        trigger_on_input : typing.Optional[global___ProcessingMode.TriggerOnInput] = ...,
        ) -> None: ...
    def HasField(self, field_name: typing_extensions.Literal["frequency",b"frequency","lockstep",b"lockstep","mode",b"mode","trigger_on_input",b"trigger_on_input"]) -> builtins.bool: ...
    def ClearField(self, field_name: typing_extensions.Literal["frequency",b"frequency","lockstep",b"lockstep","mode",b"mode","trigger_on_input",b"trigger_on_input"]) -> None: ...
    def WhichOneof(self, oneof_group: typing_extensions.Literal["mode",b"mode"]) -> typing.Optional[typing_extensions.Literal["frequency","lockstep","trigger_on_input"]]: ...
global___ProcessingMode = ProcessingMode

class ModuleIO(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    INTERNAL_NAME_FIELD_NUMBER: builtins.int
    MESSAGE_FORMAT_FIELD_NUMBER: builtins.int
    internal_name: typing.Text = ...
    message_format: typing.Text = ...
    def __init__(self,
        *,
        internal_name : typing.Text = ...,
        message_format : typing.Text = ...,
        ) -> None: ...
    def ClearField(self, field_name: typing_extensions.Literal["internal_name",b"internal_name","message_format",b"message_format"]) -> None: ...
global___ModuleIO = ModuleIO

class ProcessingModule(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    class Status(_Status, metaclass=_StatusEnumTypeWrapper):
        pass
    class _Status:
        V = typing.NewType('V', builtins.int)
    class _StatusEnumTypeWrapper(google.protobuf.internal.enum_type_wrapper._EnumTypeWrapper[_Status.V], builtins.type):
        DESCRIPTOR: google.protobuf.descriptor.EnumDescriptor = ...
        INITIALIZED = ProcessingModule.Status.V(0)
        CREATED = ProcessingModule.Status.V(1)
        PROCESSING = ProcessingModule.Status.V(2)
        HALTED = ProcessingModule.Status.V(3)
        DESTROYED = ProcessingModule.Status.V(4)

    INITIALIZED = ProcessingModule.Status.V(0)
    CREATED = ProcessingModule.Status.V(1)
    PROCESSING = ProcessingModule.Status.V(2)
    HALTED = ProcessingModule.Status.V(3)
    DESTROYED = ProcessingModule.Status.V(4)

    class Language(_Language, metaclass=_LanguageEnumTypeWrapper):
        pass
    class _Language:
        V = typing.NewType('V', builtins.int)
    class _LanguageEnumTypeWrapper(google.protobuf.internal.enum_type_wrapper._EnumTypeWrapper[_Language.V], builtins.type):
        DESCRIPTOR: google.protobuf.descriptor.EnumDescriptor = ...
        CPP = ProcessingModule.Language.V(0)
        PY = ProcessingModule.Language.V(1)
        JS = ProcessingModule.Language.V(2)
        CS = ProcessingModule.Language.V(3)
        JAVA = ProcessingModule.Language.V(4)

    CPP = ProcessingModule.Language.V(0)
    PY = ProcessingModule.Language.V(1)
    JS = ProcessingModule.Language.V(2)
    CS = ProcessingModule.Language.V(3)
    JAVA = ProcessingModule.Language.V(4)

    ID_FIELD_NUMBER: builtins.int
    NAME_FIELD_NUMBER: builtins.int
    AUTHORS_FIELD_NUMBER: builtins.int
    TAGS_FIELD_NUMBER: builtins.int
    DESCRIPTION_FIELD_NUMBER: builtins.int
    NODE_ID_FIELD_NUMBER: builtins.int
    SESSION_ID_FIELD_NUMBER: builtins.int
    STATUS_FIELD_NUMBER: builtins.int
    PROCESSING_MODE_FIELD_NUMBER: builtins.int
    INPUTS_FIELD_NUMBER: builtins.int
    OUTPUTS_FIELD_NUMBER: builtins.int
    LANGUAGE_FIELD_NUMBER: builtins.int
    ON_PROCESSING_STRINGIFIED_FIELD_NUMBER: builtins.int
    ON_CREATED_STRINGIFIED_FIELD_NUMBER: builtins.int
    ON_HALTED_STRINGIFIED_FIELD_NUMBER: builtins.int
    ON_DESTROYED_STRINGIFIED_FIELD_NUMBER: builtins.int
    id: typing.Text = ...
    name: typing.Text = ...
    @property
    def authors(self) -> google.protobuf.internal.containers.RepeatedScalarFieldContainer[typing.Text]: ...
    @property
    def tags(self) -> google.protobuf.internal.containers.RepeatedScalarFieldContainer[typing.Text]: ...
    description: typing.Text = ...
    node_id: typing.Text = ...
    session_id: typing.Text = ...
    status: global___ProcessingModule.Status.V = ...
    @property
    def processing_mode(self) -> global___ProcessingMode: ...
    @property
    def inputs(self) -> google.protobuf.internal.containers.RepeatedCompositeFieldContainer[global___ModuleIO]: ...
    @property
    def outputs(self) -> google.protobuf.internal.containers.RepeatedCompositeFieldContainer[global___ModuleIO]: ...
    language: global___ProcessingModule.Language.V = ...
    on_processing_stringified: typing.Text = ...
    on_created_stringified: typing.Text = ...
    on_halted_stringified: typing.Text = ...
    on_destroyed_stringified: typing.Text = ...
    def __init__(self,
        *,
        id : typing.Text = ...,
        name : typing.Text = ...,
        authors : typing.Optional[typing.Iterable[typing.Text]] = ...,
        tags : typing.Optional[typing.Iterable[typing.Text]] = ...,
        description : typing.Text = ...,
        node_id : typing.Text = ...,
        session_id : typing.Text = ...,
        status : global___ProcessingModule.Status.V = ...,
        processing_mode : typing.Optional[global___ProcessingMode] = ...,
        inputs : typing.Optional[typing.Iterable[global___ModuleIO]] = ...,
        outputs : typing.Optional[typing.Iterable[global___ModuleIO]] = ...,
        language : global___ProcessingModule.Language.V = ...,
        on_processing_stringified : typing.Text = ...,
        on_created_stringified : typing.Text = ...,
        on_halted_stringified : typing.Text = ...,
        on_destroyed_stringified : typing.Text = ...,
        ) -> None: ...
    def HasField(self, field_name: typing_extensions.Literal["processing_mode",b"processing_mode"]) -> builtins.bool: ...
    def ClearField(self, field_name: typing_extensions.Literal["authors",b"authors","description",b"description","id",b"id","inputs",b"inputs","language",b"language","name",b"name","node_id",b"node_id","on_created_stringified",b"on_created_stringified","on_destroyed_stringified",b"on_destroyed_stringified","on_halted_stringified",b"on_halted_stringified","on_processing_stringified",b"on_processing_stringified","outputs",b"outputs","processing_mode",b"processing_mode","session_id",b"session_id","status",b"status","tags",b"tags"]) -> None: ...
global___ProcessingModule = ProcessingModule

class ProcessingModuleList(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    ELEMENTS_FIELD_NUMBER: builtins.int
    @property
    def elements(self) -> google.protobuf.internal.containers.RepeatedCompositeFieldContainer[global___ProcessingModule]: ...
    def __init__(self,
        *,
        elements : typing.Optional[typing.Iterable[global___ProcessingModule]] = ...,
        ) -> None: ...
    def ClearField(self, field_name: typing_extensions.Literal["elements",b"elements"]) -> None: ...
global___ProcessingModuleList = ProcessingModuleList