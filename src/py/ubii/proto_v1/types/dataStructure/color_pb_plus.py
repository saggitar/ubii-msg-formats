"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    DOUBLE,
    Field,
)

from proto.message import (
    Message,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "Color",
    }
)


class Color(Message):
    r = Field(
        DOUBLE,
        number=1,
    )
    g = Field(
        DOUBLE,
        number=2,
    )
    b = Field(
        DOUBLE,
        number=3,
    )
    a = Field(
        DOUBLE,
        number=4,
    )

