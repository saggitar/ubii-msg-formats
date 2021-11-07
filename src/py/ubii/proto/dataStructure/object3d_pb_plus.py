"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message
import ubii.proto.dataStructure.pose3d_pb_plus
import ubii.proto.dataStructure.vector3_pb_plus

class Object3D(proto.message.Message):
    id = proto.Field(proto.STRING, number=0)
    pose = proto.Field(ubii.proto.dataStructure.pose3d_pb_plus.Pose3D, number=1)
    size = proto.Field(ubii.proto.dataStructure.vector3_pb_plus.Vector3, number=2)
    user_data_json = proto.Field(proto.STRING, number=3)

class Object3DList(proto.message.Message):
    elements = proto.RepeatedField(Object3D, number=0)