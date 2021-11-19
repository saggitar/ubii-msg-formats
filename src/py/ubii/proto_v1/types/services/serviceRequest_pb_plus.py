"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    Field,
    STRING,
)

from proto.message import (
    Message,
)

from ubii.proto_v1.types.clients.client_pb_plus import (
    Client,
    ClientList,
)

from ubii.proto_v1.types.devices.device_pb_plus import (
    Device,
    DeviceList,
)

from ubii.proto_v1.types.devices.topicDemux_pb_plus import (
    TopicDemux,
    TopicDemuxList,
)

from ubii.proto_v1.types.devices.topicMux_pb_plus import (
    TopicMux,
    TopicMuxList,
)

from ubii.proto_v1.types.processing.lockstepProcessing_pb_plus import (
    LockstepProcessingRequest,
)

from ubii.proto_v1.types.processing.processingModule_pb_plus import (
    ProcessingModule,
    ProcessingModuleList,
)

from ubii.proto_v1.types.services.request.topicSubscription_pb_plus import (
    TopicSubscription,
)

from ubii.proto_v1.types.sessions.session_pb_plus import (
    Session,
    SessionList,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "ServiceRequest",
    }
)


class ServiceRequest(Message):
    topic = Field(
        STRING,
        number=1,
    )
    client = Field(
        Client,
        number=2,
        oneof='type',
    )
    device = Field(
        Device,
        number=3,
        oneof='type',
    )
    topic_subscription = Field(
        TopicSubscription,
        number=4,
        oneof='type',
    )
    session = Field(
        Session,
        number=5,
        oneof='type',
    )
    session_list = Field(
        SessionList,
        number=6,
        oneof='type',
    )
    processing_module = Field(
        ProcessingModule,
        number=7,
        oneof='type',
    )
    processing_module_list = Field(
        ProcessingModuleList,
        number=8,
        oneof='type',
    )
    topic_mux = Field(
        TopicMux,
        number=9,
        oneof='type',
    )
    topic_mux_list = Field(
        TopicMuxList,
        number=10,
        oneof='type',
    )
    topic_demux = Field(
        TopicDemux,
        number=11,
        oneof='type',
    )
    topic_demux_list = Field(
        TopicDemuxList,
        number=12,
        oneof='type',
    )
    client_list = Field(
        ClientList,
        number=13,
        oneof='type',
    )
    device_list = Field(
        DeviceList,
        number=14,
        oneof='type',
    )
    lockstep_processing_request = Field(
        LockstepProcessingRequest,
        number=15,
        oneof='type',
    )


