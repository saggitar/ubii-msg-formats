"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message
import ubii.proto.dataStructure.quaternion_pb_plus
import ubii.proto.dataStructure.vector3_pb_plus

class Pose3D(proto.message.Message):
    position = proto.Field(ubii.proto.dataStructure.vector3_pb_plus.Vector3, number=1)
    quaternion = proto.Field(ubii.proto.dataStructure.quaternion_pb_plus.Quaternion, number=2)
    euler = proto.Field(ubii.proto.dataStructure.vector3_pb_plus.Vector3, number=3)