"""
@generated by codestare-proto-plus.  Do not edit manually!
"""
from proto import (
    Enum,
    FLOAT,
    Field,
    RepeatedField,
    STRING,
    module,
)

from proto.message import (
    Message,
)

from ubii.proto.v1.dataStructure.vector2_pb_plus import (
    Vector2,
)


__protobuf__ = module(
    package="ubii.proto.v1",
    manifest={
        "TouchEvent",
        "TouchEventList",
    }
)


class TouchEvent(Message):
    """Generated from ubii/proto/v1/dataStructure/touchEvent.proto

    Attributes:
        type (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~.TouchEventType`

        position (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~ubii.proto.v1.dataStructure.vector2_pb_plus.Vector2`

        id (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~proto.STRING`

        force (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~proto.FLOAT`

    """

    class TouchEventType(Enum):
        TOUCH_START = 0
        TOUCH_MOVE = 1
        TOUCH_END = 2

    type = Field(
        TouchEventType,
        number=1,
    )
    position = Field(
        Vector2,
        number=2,
    )
    id = Field(
        STRING,
        number=3,
    )
    force = Field(
        FLOAT,
        number=4,
    )


class TouchEventList(Message):
    """Generated from ubii/proto/v1/dataStructure/touchEvent.proto

    Attributes:
        elements (proto.fields.RepeatedField): :obj:`~proto.fields.RepeatedField` of
            type :obj:`~.TouchEvent`

    """

    elements = RepeatedField(
        TouchEvent,
        number=1,
    )

