"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    Enum,
    Field,
    RepeatedField,
    STRING,
)

from proto.message import (
    Message,
)

from ubii.proto_v1.types.devices.component_pb_plus import (
    Component,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "Device",
        "DeviceList",
    }
)


class Device(Message):
    class DeviceType(Enum):
        PARTICIPANT = 0
        WATCHER = 1


    id = Field(
        STRING,
        number=1,
    )
    name = Field(
        STRING,
        number=2,
    )
    device_type = Field(
        DeviceType,
        number=3,
    )
    components = RepeatedField(
        Component,
        number=4,
    )
    client_id = Field(
        STRING,
        number=5,
    )
    tags = RepeatedField(
        STRING,
        number=6,
    )
    description = Field(
        STRING,
        number=7,
    )



class DeviceList(Message):
    elements = RepeatedField(
        Device,
        number=1,
    )


