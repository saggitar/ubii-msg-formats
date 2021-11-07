"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import builtins
import google.protobuf.descriptor
import google.protobuf.message
import typing
import typing_extensions
import ubii.proto.dataStructure.quaternion_pb2
import ubii.proto.dataStructure.vector3_pb2

DESCRIPTOR: google.protobuf.descriptor.FileDescriptor = ...

class Pose3D(google.protobuf.message.Message):
    DESCRIPTOR: google.protobuf.descriptor.Descriptor = ...
    POSITION_FIELD_NUMBER: builtins.int
    QUATERNION_FIELD_NUMBER: builtins.int
    EULER_FIELD_NUMBER: builtins.int
    @property
    def position(self) -> ubii.proto.dataStructure.vector3_pb2.Vector3: ...
    @property
    def quaternion(self) -> ubii.proto.dataStructure.quaternion_pb2.Quaternion: ...
    @property
    def euler(self) -> ubii.proto.dataStructure.vector3_pb2.Vector3: ...
    def __init__(self,
        *,
        position : typing.Optional[ubii.proto.dataStructure.vector3_pb2.Vector3] = ...,
        quaternion : typing.Optional[ubii.proto.dataStructure.quaternion_pb2.Quaternion] = ...,
        euler : typing.Optional[ubii.proto.dataStructure.vector3_pb2.Vector3] = ...,
        ) -> None: ...
    def HasField(self, field_name: typing_extensions.Literal["euler",b"euler","orientation",b"orientation","position",b"position","quaternion",b"quaternion"]) -> builtins.bool: ...
    def ClearField(self, field_name: typing_extensions.Literal["euler",b"euler","orientation",b"orientation","position",b"position","quaternion",b"quaternion"]) -> None: ...
    def WhichOneof(self, oneof_group: typing_extensions.Literal["orientation",b"orientation"]) -> typing.Optional[typing_extensions.Literal["quaternion","euler"]]: ...
global___Pose3D = Pose3D
