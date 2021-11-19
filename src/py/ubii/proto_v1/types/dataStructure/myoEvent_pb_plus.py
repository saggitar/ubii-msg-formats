"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    Field,
)

from proto.message import (
    Message,
)

from ubii.proto_v1.types.dataStructure.handGestureType_pb_plus import (
    HandGestureType,
)

from ubii.proto_v1.types.dataStructure.quaternion_pb_plus import (
    Quaternion,
)

from ubii.proto_v1.types.dataStructure.vector3_pb_plus import (
    Vector3,
)

from ubii.proto_v1.types.dataStructure.vector8_pb_plus import (
    Vector8,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "MyoEvent",
    }
)


class MyoEvent(Message):
    emg = Field(
        Vector8,
        number=1,
    )
    orientation = Field(
        Quaternion,
        number=2,
    )
    gyroscope = Field(
        Vector3,
        number=3,
    )
    accelerometer = Field(
        Vector3,
        number=4,
    )
    gesture = Field(
        HandGestureType,
        number=5,
    )


