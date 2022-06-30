"""
@generated by codestare-proto-plus.  Do not edit manually!
"""
from proto import (
    DOUBLE,
    Field,
    RepeatedField,
    module,
)

from proto.message import (
    Message,
)


__protobuf__ = module(
    package="ubii.proto.v1.dataStructure",
    marshal="ubii.proto.v1",
    manifest={
        "Vector3",
        "Vector3List",
    }
)


class Vector3(Message):
    """
    Attributes:
        x (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~proto.primitives.ProtoType.DOUBLE`
        y (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~proto.primitives.ProtoType.DOUBLE`
        z (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~proto.primitives.ProtoType.DOUBLE`
    """

    x = Field(
        DOUBLE,
        number=1,
    )
    y = Field(
        DOUBLE,
        number=2,
    )
    z = Field(
        DOUBLE,
        number=3,
    )


class Vector3List(Message):
    """
    Attributes:
        elements (proto.fields.RepeatedField): :obj:`~proto.fields.RepeatedField` of type
            :obj:`~.Vector3`
    """

    elements = RepeatedField(
        Vector3,
        number=1,
    )

