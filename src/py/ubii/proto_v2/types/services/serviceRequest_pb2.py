# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_v2/types/services/serviceRequest.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto_v2.types.clients import client_pb2 as ubii_dot_proto__v2_dot_types_dot_clients_dot_client__pb2
from ubii.proto_v2.types.devices import device_pb2 as ubii_dot_proto__v2_dot_types_dot_devices_dot_device__pb2
from ubii.proto_v2.types.devices import topicMux_pb2 as ubii_dot_proto__v2_dot_types_dot_devices_dot_topicMux__pb2
from ubii.proto_v2.types.devices import topicDemux_pb2 as ubii_dot_proto__v2_dot_types_dot_devices_dot_topicDemux__pb2
from ubii.proto_v2.types.sessions import session_pb2 as ubii_dot_proto__v2_dot_types_dot_sessions_dot_session__pb2
from ubii.proto_v2.types.services.request import topicSubscription_pb2 as ubii_dot_proto__v2_dot_types_dot_services_dot_request_dot_topicSubscription__pb2
from ubii.proto_v2.types.processing import processingModule_pb2 as ubii_dot_proto__v2_dot_types_dot_processing_dot_processingModule__pb2
from ubii.proto_v2.types.processing import lockstepProcessing_pb2 as ubii_dot_proto__v2_dot_types_dot_processing_dot_lockstepProcessing__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ubii/proto_v2/types/services/serviceRequest.proto',
  package='ubii.proto_v2.types.services',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n1ubii/proto_v2/types/services/serviceRequest.proto\x12\x1cubii.proto_v2.types.services\x1a(ubii/proto_v2/types/clients/client.proto\x1a(ubii/proto_v2/types/devices/device.proto\x1a*ubii/proto_v2/types/devices/topicMux.proto\x1a,ubii/proto_v2/types/devices/topicDemux.proto\x1a*ubii/proto_v2/types/sessions/session.proto\x1a<ubii/proto_v2/types/services/request/topicSubscription.proto\x1a\x35ubii/proto_v2/types/processing/processingModule.proto\x1a\x37ubii/proto_v2/types/processing/lockstepProcessing.proto\"\xfc\x07\n\x0eServiceRequest\x12\r\n\x05topic\x18\x01 \x01(\t\x12\x35\n\x06\x63lient\x18\x02 \x01(\x0b\x32#.ubii.proto_v2.types.clients.ClientH\x00\x12\x35\n\x06\x64\x65vice\x18\x03 \x01(\x0b\x32#.ubii.proto_v2.types.devices.DeviceH\x00\x12U\n\x12topic_subscription\x18\x04 \x01(\x0b\x32\x37.ubii.proto_v2.types.services.request.TopicSubscriptionH\x00\x12\x38\n\x07session\x18\x05 \x01(\x0b\x32%.ubii.proto_v2.types.sessions.SessionH\x00\x12\x41\n\x0csession_list\x18\x06 \x01(\x0b\x32).ubii.proto_v2.types.sessions.SessionListH\x00\x12M\n\x11processing_module\x18\x07 \x01(\x0b\x32\x30.ubii.proto_v2.types.processing.ProcessingModuleH\x00\x12V\n\x16processing_module_list\x18\x08 \x01(\x0b\x32\x34.ubii.proto_v2.types.processing.ProcessingModuleListH\x00\x12:\n\ttopic_mux\x18\t \x01(\x0b\x32%.ubii.proto_v2.types.devices.TopicMuxH\x00\x12\x43\n\x0etopic_mux_list\x18\n \x01(\x0b\x32).ubii.proto_v2.types.devices.TopicMuxListH\x00\x12>\n\x0btopic_demux\x18\x0b \x01(\x0b\x32\'.ubii.proto_v2.types.devices.TopicDemuxH\x00\x12G\n\x10topic_demux_list\x18\x0c \x01(\x0b\x32+.ubii.proto_v2.types.devices.TopicDemuxListH\x00\x12>\n\x0b\x63lient_list\x18\r \x01(\x0b\x32\'.ubii.proto_v2.types.clients.ClientListH\x00\x12>\n\x0b\x64\x65vice_list\x18\x0e \x01(\x0b\x32\'.ubii.proto_v2.types.devices.DeviceListH\x00\x12`\n\x1blockstep_processing_request\x18\x0f \x01(\x0b\x32\x39.ubii.proto_v2.types.processing.LockstepProcessingRequestH\x00\x42\x06\n\x04typeb\x06proto3'
  ,
  dependencies=[ubii_dot_proto__v2_dot_types_dot_clients_dot_client__pb2.DESCRIPTOR,ubii_dot_proto__v2_dot_types_dot_devices_dot_device__pb2.DESCRIPTOR,ubii_dot_proto__v2_dot_types_dot_devices_dot_topicMux__pb2.DESCRIPTOR,ubii_dot_proto__v2_dot_types_dot_devices_dot_topicDemux__pb2.DESCRIPTOR,ubii_dot_proto__v2_dot_types_dot_sessions_dot_session__pb2.DESCRIPTOR,ubii_dot_proto__v2_dot_types_dot_services_dot_request_dot_topicSubscription__pb2.DESCRIPTOR,ubii_dot_proto__v2_dot_types_dot_processing_dot_processingModule__pb2.DESCRIPTOR,ubii_dot_proto__v2_dot_types_dot_processing_dot_lockstepProcessing__pb2.DESCRIPTOR,])




_SERVICEREQUEST = _descriptor.Descriptor(
  name='ServiceRequest',
  full_name='ubii.proto_v2.types.services.ServiceRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='topic', full_name='ubii.proto_v2.types.services.ServiceRequest.topic', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='client', full_name='ubii.proto_v2.types.services.ServiceRequest.client', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='device', full_name='ubii.proto_v2.types.services.ServiceRequest.device', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_subscription', full_name='ubii.proto_v2.types.services.ServiceRequest.topic_subscription', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='session', full_name='ubii.proto_v2.types.services.ServiceRequest.session', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='session_list', full_name='ubii.proto_v2.types.services.ServiceRequest.session_list', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='processing_module', full_name='ubii.proto_v2.types.services.ServiceRequest.processing_module', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='processing_module_list', full_name='ubii.proto_v2.types.services.ServiceRequest.processing_module_list', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_mux', full_name='ubii.proto_v2.types.services.ServiceRequest.topic_mux', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_mux_list', full_name='ubii.proto_v2.types.services.ServiceRequest.topic_mux_list', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_demux', full_name='ubii.proto_v2.types.services.ServiceRequest.topic_demux', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_demux_list', full_name='ubii.proto_v2.types.services.ServiceRequest.topic_demux_list', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='client_list', full_name='ubii.proto_v2.types.services.ServiceRequest.client_list', index=12,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='device_list', full_name='ubii.proto_v2.types.services.ServiceRequest.device_list', index=13,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='lockstep_processing_request', full_name='ubii.proto_v2.types.services.ServiceRequest.lockstep_processing_request', index=14,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='type', full_name='ubii.proto_v2.types.services.ServiceRequest.type',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=476,
  serialized_end=1496,
)

_SERVICEREQUEST.fields_by_name['client'].message_type = ubii_dot_proto__v2_dot_types_dot_clients_dot_client__pb2._CLIENT
_SERVICEREQUEST.fields_by_name['device'].message_type = ubii_dot_proto__v2_dot_types_dot_devices_dot_device__pb2._DEVICE
_SERVICEREQUEST.fields_by_name['topic_subscription'].message_type = ubii_dot_proto__v2_dot_types_dot_services_dot_request_dot_topicSubscription__pb2._TOPICSUBSCRIPTION
_SERVICEREQUEST.fields_by_name['session'].message_type = ubii_dot_proto__v2_dot_types_dot_sessions_dot_session__pb2._SESSION
_SERVICEREQUEST.fields_by_name['session_list'].message_type = ubii_dot_proto__v2_dot_types_dot_sessions_dot_session__pb2._SESSIONLIST
_SERVICEREQUEST.fields_by_name['processing_module'].message_type = ubii_dot_proto__v2_dot_types_dot_processing_dot_processingModule__pb2._PROCESSINGMODULE
_SERVICEREQUEST.fields_by_name['processing_module_list'].message_type = ubii_dot_proto__v2_dot_types_dot_processing_dot_processingModule__pb2._PROCESSINGMODULELIST
_SERVICEREQUEST.fields_by_name['topic_mux'].message_type = ubii_dot_proto__v2_dot_types_dot_devices_dot_topicMux__pb2._TOPICMUX
_SERVICEREQUEST.fields_by_name['topic_mux_list'].message_type = ubii_dot_proto__v2_dot_types_dot_devices_dot_topicMux__pb2._TOPICMUXLIST
_SERVICEREQUEST.fields_by_name['topic_demux'].message_type = ubii_dot_proto__v2_dot_types_dot_devices_dot_topicDemux__pb2._TOPICDEMUX
_SERVICEREQUEST.fields_by_name['topic_demux_list'].message_type = ubii_dot_proto__v2_dot_types_dot_devices_dot_topicDemux__pb2._TOPICDEMUXLIST
_SERVICEREQUEST.fields_by_name['client_list'].message_type = ubii_dot_proto__v2_dot_types_dot_clients_dot_client__pb2._CLIENTLIST
_SERVICEREQUEST.fields_by_name['device_list'].message_type = ubii_dot_proto__v2_dot_types_dot_devices_dot_device__pb2._DEVICELIST
_SERVICEREQUEST.fields_by_name['lockstep_processing_request'].message_type = ubii_dot_proto__v2_dot_types_dot_processing_dot_lockstepProcessing__pb2._LOCKSTEPPROCESSINGREQUEST
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['client'])
_SERVICEREQUEST.fields_by_name['client'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['device'])
_SERVICEREQUEST.fields_by_name['device'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_subscription'])
_SERVICEREQUEST.fields_by_name['topic_subscription'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['session'])
_SERVICEREQUEST.fields_by_name['session'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['session_list'])
_SERVICEREQUEST.fields_by_name['session_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['processing_module'])
_SERVICEREQUEST.fields_by_name['processing_module'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['processing_module_list'])
_SERVICEREQUEST.fields_by_name['processing_module_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_mux'])
_SERVICEREQUEST.fields_by_name['topic_mux'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_mux_list'])
_SERVICEREQUEST.fields_by_name['topic_mux_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_demux'])
_SERVICEREQUEST.fields_by_name['topic_demux'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_demux_list'])
_SERVICEREQUEST.fields_by_name['topic_demux_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['client_list'])
_SERVICEREQUEST.fields_by_name['client_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['device_list'])
_SERVICEREQUEST.fields_by_name['device_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['lockstep_processing_request'])
_SERVICEREQUEST.fields_by_name['lockstep_processing_request'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
DESCRIPTOR.message_types_by_name['ServiceRequest'] = _SERVICEREQUEST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ServiceRequest = _reflection.GeneratedProtocolMessageType('ServiceRequest', (_message.Message,), {
  'DESCRIPTOR' : _SERVICEREQUEST,
  '__module__' : 'ubii.proto_v2.types.services.serviceRequest_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_v2.types.services.ServiceRequest)
  })
_sym_db.RegisterMessage(ServiceRequest)


# @@protoc_insertion_point(module_scope)
