"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    BOOL,
    Enum,
    Field,
    RepeatedField,
    STRING,
)

from proto.message import (
    Message,
)

from ubii.proto_v1.types.devices.device_pb_plus import (
    Device,
)

from ubii.proto_v1.types.processing.processingModule_pb_plus import (
    ProcessingModule,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "Client",
        "ClientList",
    }
)


class Client(Message):
    class State(Enum):
        ACTIVE = 0
        INACTIVE = 1
        UNAVAILABLE = 2

    id = Field(
        STRING,
        number=1,
    )
    name = Field(
        STRING,
        number=2,
    )
    devices = RepeatedField(
        Device,
        number=3,
    )
    tags = RepeatedField(
        STRING,
        number=4,
    )
    description = Field(
        STRING,
        number=5,
    )
    processing_modules = RepeatedField(
        ProcessingModule,
        number=6,
    )
    is_dedicated_processing_node = Field(
        BOOL,
        number=7,
    )
    host_ip = Field(
        STRING,
        number=8,
    )
    metadata_json = Field(
        STRING,
        number=9,
    )
    state = Field(
        State,
        number=10,
    )



class ClientList(Message):
    elements = RepeatedField(
        Client,
        number=1,
    )


