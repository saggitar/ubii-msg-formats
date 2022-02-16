"""
@generated by codestare-proto-plus.  Do not edit manually!
"""
from proto import (
    Field,
    STRING,
    module,
)

from proto.message import (
    Message,
)

from ubii.proto.v1.clients.client_pb_plus import (
    Client,
    ClientList,
)

from ubii.proto.v1.devices.device_pb_plus import (
    Device,
    DeviceList,
)

from ubii.proto.v1.devices.topicDemux_pb_plus import (
    TopicDemux,
    TopicDemuxList,
)

from ubii.proto.v1.devices.topicMux_pb_plus import (
    TopicMux,
    TopicMuxList,
)

from ubii.proto.v1.processing.lockstepProcessing_pb_plus import (
    LockstepProcessingRequest,
)

from ubii.proto.v1.processing.processingModule_pb_plus import (
    ProcessingModule,
    ProcessingModuleList,
)

from ubii.proto.v1.services.request.topicSubscription_pb_plus import (
    TopicSubscription,
)

from ubii.proto.v1.sessions.session_pb_plus import (
    Session,
    SessionList,
)


__protobuf__ = module(
    package="ubii.proto.v1",
    manifest={
        "ServiceRequest",
    }
)


class ServiceRequest(Message):
    """Generated from ubii/proto/v1/services/serviceRequest.proto

    Attributes:
        topic (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~proto.STRING`
        client (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.clients.client_pb_plus.Client`
        device (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.devices.device_pb_plus.Device`
        topic_subscription (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.services.request.topicSubscription_pb_plus.TopicSubscription`
        session (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.sessions.session_pb_plus.Session`
        session_list (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.sessions.session_pb_plus.SessionList`
        processing_module (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.processing.processingModule_pb_plus.ProcessingModule`
        processing_module_list (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.processing.processingModule_pb_plus.ProcessingModuleList`
        topic_mux (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.devices.topicMux_pb_plus.TopicMux`
        topic_mux_list (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.devices.topicMux_pb_plus.TopicMuxList`
        topic_demux (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.devices.topicDemux_pb_plus.TopicDemux`
        topic_demux_list (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.devices.topicDemux_pb_plus.TopicDemuxList`
        client_list (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.clients.client_pb_plus.ClientList`
        device_list (proto.fields.Field): :obj:`~proto.fields.Field` of type
             :obj:`~ubii.proto.v1.devices.device_pb_plus.DeviceList`
        lockstep_processing_request (proto.fields.Field): :obj:`~proto.fields.Field` of
             type
             :obj:`~ubii.proto.v1.processing.lockstepProcessing_pb_plus.LockstepProcessingRequest`

    """
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

