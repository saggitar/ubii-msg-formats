"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import builtins
import google.protobuf.descriptor
import google.protobuf.message
import typing
import typing_extensions
import ubii.proto.dataStructure.buttonEventType_pb2

DESCRIPTOR: google.protobuf.descriptor.FileDescriptor = ...

class KeyEvent(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    TYPE_FIELD_NUMBER: builtins.int
    KEY_FIELD_NUMBER: builtins.int
    type: ubii.proto.dataStructure.buttonEventType_pb2.ButtonEventType.V = ...
    key: typing.Text = ...
    def __init__(self,
        *,
        type : ubii.proto.dataStructure.buttonEventType_pb2.ButtonEventType.V = ...,
        key : typing.Text = ...,
        ) -> None: ...
    def ClearField(self, field_name: typing_extensions.Literal["key",b"key","type",b"type"]) -> None: ...
global___KeyEvent = KeyEvent