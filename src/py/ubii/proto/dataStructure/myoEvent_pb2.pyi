"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import builtins
import google.protobuf.descriptor
import google.protobuf.message
import typing
import typing_extensions
import ubii.proto.dataStructure.handGestureType_pb2
import ubii.proto.dataStructure.quaternion_pb2
import ubii.proto.dataStructure.vector3_pb2
import ubii.proto.dataStructure.vector8_pb2

DESCRIPTOR: google.protobuf.descriptor.FileDescriptor = ...

class MyoEvent(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    EMG_FIELD_NUMBER: builtins.int
    ORIENTATION_FIELD_NUMBER: builtins.int
    GYROSCOPE_FIELD_NUMBER: builtins.int
    ACCELEROMETER_FIELD_NUMBER: builtins.int
    GESTURE_FIELD_NUMBER: builtins.int
    @property
    def emg(self) -> ubii.proto.dataStructure.vector8_pb2.Vector8: ...
    @property
    def orientation(self) -> ubii.proto.dataStructure.quaternion_pb2.Quaternion: ...
    @property
    def gyroscope(self) -> ubii.proto.dataStructure.vector3_pb2.Vector3: ...
    @property
    def accelerometer(self) -> ubii.proto.dataStructure.vector3_pb2.Vector3: ...
    gesture: ubii.proto.dataStructure.handGestureType_pb2.HandGestureType.V = ...
    def __init__(self,
        *,
        emg : typing.Optional[ubii.proto.dataStructure.vector8_pb2.Vector8] = ...,
        orientation : typing.Optional[ubii.proto.dataStructure.quaternion_pb2.Quaternion] = ...,
        gyroscope : typing.Optional[ubii.proto.dataStructure.vector3_pb2.Vector3] = ...,
        accelerometer : typing.Optional[ubii.proto.dataStructure.vector3_pb2.Vector3] = ...,
        gesture : ubii.proto.dataStructure.handGestureType_pb2.HandGestureType.V = ...,
        ) -> None: ...
    def HasField(self, field_name: typing_extensions.Literal["accelerometer",b"accelerometer","emg",b"emg","gyroscope",b"gyroscope","orientation",b"orientation"]) -> builtins.bool: ...
    def ClearField(self, field_name: typing_extensions.Literal["accelerometer",b"accelerometer","emg",b"emg","gesture",b"gesture","gyroscope",b"gyroscope","orientation",b"orientation"]) -> None: ...
global___MyoEvent = MyoEvent
