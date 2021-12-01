"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    DOUBLE,
    Field,
    RepeatedField,
)

from proto.message import (
    Message,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "Vector3",
        "Vector3List",
    }
)


class Vector3(Message):
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
    elements = RepeatedField(
        Vector3,
        number=1,
    )

