"""
@generated by codestare-proto-plus.  Do not edit manually!
"""
from proto import (
    Field,
    RepeatedField,
    STRING,
    module,
)

from proto.message import (
    Message,
)

from ubii.proto.v1.dataStructure.pose3d_pb_plus import (
    Pose3D,
)

from ubii.proto.v1.dataStructure.vector3_pb_plus import (
    Vector3,
)


__protobuf__ = module(
    package="ubii.proto.v1.dataStructure",
    marshal="ubii.proto.v1",
    manifest={
        "Object3D",
        "Object3DList",
    }
)


class Object3D(Message):
    """
    Attributes:
        id (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~proto.primitives.ProtoType.STRING`
        pose (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~ubii.proto.v1.dataStructure.pose3d_pb_plus.Pose3D`
        size (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~ubii.proto.v1.dataStructure.vector3_pb_plus.Vector3`
        user_data_json (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~proto.primitives.ProtoType.STRING`
    """

    id = Field(
        STRING,
        number=1,
    )
    pose = Field(
        Pose3D,
        number=2,
    )
    size = Field(
        Vector3,
        number=3,
    )
    user_data_json = Field(
        STRING,
        number=4,
    )


class Object3DList(Message):
    """
    Attributes:
        elements (proto.fields.RepeatedField): :obj:`~proto.fields.RepeatedField` of type
            :obj:`~.Object3D`
    """

    elements = RepeatedField(
        Object3D,
        number=1,
    )

