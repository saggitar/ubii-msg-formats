"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message
import ubii.proto.clients.client_pb_plus
import ubii.proto.dataStructure.lists_pb_plus
import ubii.proto.devices.device_pb_plus
import ubii.proto.devices.topicDemux_pb_plus
import ubii.proto.devices.topicMux_pb_plus
import ubii.proto.general.error_pb_plus
import ubii.proto.general.success_pb_plus
import ubii.proto.processing.lockstepProcessing_pb_plus
import ubii.proto.processing.processingModule_pb_plus
import ubii.proto.servers.server_pb_plus
import ubii.proto.services.service_pb_plus
import ubii.proto.sessions.session_pb_plus

class ServiceReply(proto.message.Message):
    success = proto.Field(ubii.proto.general.success_pb_plus.Success, number=1)
    error = proto.Field(ubii.proto.general.error_pb_plus.Error, number=2)
    client = proto.Field(ubii.proto.clients.client_pb_plus.Client, number=3)
    device = proto.Field(ubii.proto.devices.device_pb_plus.Device, number=4)
    server = proto.Field(ubii.proto.servers.server_pb_plus.Server, number=5)
    session = proto.Field(ubii.proto.sessions.session_pb_plus.Session, number=6)
    session_list = proto.Field(ubii.proto.sessions.session_pb_plus.SessionList, number=7)
    processing_module = proto.Field(ubii.proto.processing.processingModule_pb_plus.ProcessingModule, number=8)
    processing_module_list = proto.Field(ubii.proto.processing.processingModule_pb_plus.ProcessingModuleList, number=9)
    string_list = proto.Field(ubii.proto.dataStructure.lists_pb_plus.StringList, number=10)
    topic_mux = proto.Field(ubii.proto.devices.topicMux_pb_plus.TopicMux, number=11)
    topic_mux_list = proto.Field(ubii.proto.devices.topicMux_pb_plus.TopicMuxList, number=12)
    topic_demux = proto.Field(ubii.proto.devices.topicDemux_pb_plus.TopicDemux, number=13)
    topic_demux_list = proto.Field(ubii.proto.devices.topicDemux_pb_plus.TopicDemuxList, number=14)
    client_list = proto.Field(ubii.proto.clients.client_pb_plus.ClientList, number=15)
    device_list = proto.Field(ubii.proto.devices.device_pb_plus.DeviceList, number=16)
    service = proto.Field(ubii.proto.services.service_pb_plus.Service, number=17)
    service_list = proto.Field(ubii.proto.services.service_pb_plus.ServiceList, number=18)
    lockstep_processing_reply = proto.Field(ubii.proto.processing.lockstepProcessing_pb_plus.LockstepProcessingReply, number=19)
