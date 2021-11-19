"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    BYTES,
    Enum,
    Field,
    INT32,
    RepeatedField,
)

from proto.message import (
    Message,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "Image2D",
        "Image2DList",
    }
)


class Image2D(Message):
    class DataFormat(Enum):
        GRAY8 = 0
        RGB8 = 1
        RGBA8 = 2

    width = Field(
        INT32,
        number=1,
    )
    height = Field(
        INT32,
        number=2,
    )
    data_format = Field(
        DataFormat,
        number=3,
    )
    data = Field(
        BYTES,
        number=4,
    )



class Image2DList(Message):
    elements = RepeatedField(
        Image2D,
        number=1,
    )


