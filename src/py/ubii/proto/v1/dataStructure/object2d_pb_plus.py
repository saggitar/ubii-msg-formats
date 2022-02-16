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

from ubii.proto.v1.dataStructure.pose2d_pb_plus import (
    Pose2D,
)

from ubii.proto.v1.dataStructure.vector2_pb_plus import (
    Vector2,
)


__protobuf__ = module(
    package="ubii.proto.v1",
    manifest={
        "Object2D",
        "Object2DList",
    }
)


class Object2D(Message):
    """Generated from ubii/proto/v1/dataStructure/object2d.proto

    Attributes:
        id (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~proto.STRING`
        pose (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.dataStructure.pose2d_pb_plus.Pose2D`
        size (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.dataStructure.vector2_pb_plus.Vector2`
        user_data_json (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~proto.STRING`

    """
    id = Field(
        STRING,
        number=1,
    )
    pose = Field(
        Pose2D,
        number=2,
    )
    size = Field(
        Vector2,
        number=3,
    )
    user_data_json = Field(
        STRING,
        number=4,
    )


class Object2DList(Message):
    """Generated from ubii/proto/v1/dataStructure/object2d.proto

    Attributes:
        elements (proto.fields.RepeatedField): :obj:`~proto.fields.RepeatedField` of
             type :obj:`~.Object2D`

    """
    elements = RepeatedField(
        Object2D,
        number=1,
    )

