# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/sessions/ioMappings.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.devices import topicMux_pb2 as proto_dot_devices_dot_topicMux__pb2
from proto.devices import topicDemux_pb2 as proto_dot_devices_dot_topicDemux__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/sessions/ioMappings.proto',
  package='ubii.sessions',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x1fproto/sessions/ioMappings.proto\x12\rubii.sessions\x1a\x1cproto/devices/topicMux.proto\x1a\x1eproto/devices/topicDemux.proto\"u\n\x11TopicInputMapping\x12\x12\n\ninput_name\x18\x01 \x01(\t\x12\x0f\n\x05topic\x18\x02 \x01(\tH\x00\x12+\n\ttopic_mux\x18\x03 \x01(\x0b\x32\x16.ubii.devices.TopicMuxH\x00\x42\x0e\n\x0ctopic_source\"K\n\x15TopicInputMappingList\x12\x32\n\x08\x65lements\x18\x01 \x03(\x0b\x32 .ubii.sessions.TopicInputMapping\"\x80\x01\n\x12TopicOutputMapping\x12\x13\n\x0boutput_name\x18\x01 \x01(\t\x12\x0f\n\x05topic\x18\x02 \x01(\tH\x00\x12/\n\x0btopic_demux\x18\x03 \x01(\x0b\x32\x18.ubii.devices.TopicDemuxH\x00\x42\x13\n\x11topic_destination\"M\n\x16TopicOutputMappingList\x12\x33\n\x08\x65lements\x18\x01 \x03(\x0b\x32!.ubii.sessions.TopicOutputMapping\"\xbf\x01\n\tIOMapping\x12\x1c\n\x14processing_module_id\x18\x01 \x01(\t\x12\x38\n\x0einput_mappings\x18\x02 \x03(\x0b\x32 .ubii.sessions.TopicInputMapping\x12:\n\x0foutput_mappings\x18\x03 \x03(\x0b\x32!.ubii.sessions.TopicOutputMapping\x12\x1e\n\x16processing_module_name\x18\x04 \x01(\t\";\n\rIOMappingList\x12*\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x18.ubii.sessions.IOMappingb\x06proto3')
  ,
  dependencies=[proto_dot_devices_dot_topicMux__pb2.DESCRIPTOR,proto_dot_devices_dot_topicDemux__pb2.DESCRIPTOR,])




_TOPICINPUTMAPPING = _descriptor.Descriptor(
  name='TopicInputMapping',
  full_name='ubii.sessions.TopicInputMapping',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='input_name', full_name='ubii.sessions.TopicInputMapping.input_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic', full_name='ubii.sessions.TopicInputMapping.topic', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_mux', full_name='ubii.sessions.TopicInputMapping.topic_mux', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
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
      name='topic_source', full_name='ubii.sessions.TopicInputMapping.topic_source',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=112,
  serialized_end=229,
)


_TOPICINPUTMAPPINGLIST = _descriptor.Descriptor(
  name='TopicInputMappingList',
  full_name='ubii.sessions.TopicInputMappingList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.sessions.TopicInputMappingList.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
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
  ],
  serialized_start=231,
  serialized_end=306,
)


_TOPICOUTPUTMAPPING = _descriptor.Descriptor(
  name='TopicOutputMapping',
  full_name='ubii.sessions.TopicOutputMapping',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='output_name', full_name='ubii.sessions.TopicOutputMapping.output_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic', full_name='ubii.sessions.TopicOutputMapping.topic', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_demux', full_name='ubii.sessions.TopicOutputMapping.topic_demux', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
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
      name='topic_destination', full_name='ubii.sessions.TopicOutputMapping.topic_destination',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=309,
  serialized_end=437,
)


_TOPICOUTPUTMAPPINGLIST = _descriptor.Descriptor(
  name='TopicOutputMappingList',
  full_name='ubii.sessions.TopicOutputMappingList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.sessions.TopicOutputMappingList.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
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
  ],
  serialized_start=439,
  serialized_end=516,
)


_IOMAPPING = _descriptor.Descriptor(
  name='IOMapping',
  full_name='ubii.sessions.IOMapping',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='processing_module_id', full_name='ubii.sessions.IOMapping.processing_module_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='input_mappings', full_name='ubii.sessions.IOMapping.input_mappings', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='output_mappings', full_name='ubii.sessions.IOMapping.output_mappings', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='processing_module_name', full_name='ubii.sessions.IOMapping.processing_module_name', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
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
  ],
  serialized_start=519,
  serialized_end=710,
)


_IOMAPPINGLIST = _descriptor.Descriptor(
  name='IOMappingList',
  full_name='ubii.sessions.IOMappingList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.sessions.IOMappingList.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
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
  ],
  serialized_start=712,
  serialized_end=771,
)

_TOPICINPUTMAPPING.fields_by_name['topic_mux'].message_type = proto_dot_devices_dot_topicMux__pb2._TOPICMUX
_TOPICINPUTMAPPING.oneofs_by_name['topic_source'].fields.append(
  _TOPICINPUTMAPPING.fields_by_name['topic'])
_TOPICINPUTMAPPING.fields_by_name['topic'].containing_oneof = _TOPICINPUTMAPPING.oneofs_by_name['topic_source']
_TOPICINPUTMAPPING.oneofs_by_name['topic_source'].fields.append(
  _TOPICINPUTMAPPING.fields_by_name['topic_mux'])
_TOPICINPUTMAPPING.fields_by_name['topic_mux'].containing_oneof = _TOPICINPUTMAPPING.oneofs_by_name['topic_source']
_TOPICINPUTMAPPINGLIST.fields_by_name['elements'].message_type = _TOPICINPUTMAPPING
_TOPICOUTPUTMAPPING.fields_by_name['topic_demux'].message_type = proto_dot_devices_dot_topicDemux__pb2._TOPICDEMUX
_TOPICOUTPUTMAPPING.oneofs_by_name['topic_destination'].fields.append(
  _TOPICOUTPUTMAPPING.fields_by_name['topic'])
_TOPICOUTPUTMAPPING.fields_by_name['topic'].containing_oneof = _TOPICOUTPUTMAPPING.oneofs_by_name['topic_destination']
_TOPICOUTPUTMAPPING.oneofs_by_name['topic_destination'].fields.append(
  _TOPICOUTPUTMAPPING.fields_by_name['topic_demux'])
_TOPICOUTPUTMAPPING.fields_by_name['topic_demux'].containing_oneof = _TOPICOUTPUTMAPPING.oneofs_by_name['topic_destination']
_TOPICOUTPUTMAPPINGLIST.fields_by_name['elements'].message_type = _TOPICOUTPUTMAPPING
_IOMAPPING.fields_by_name['input_mappings'].message_type = _TOPICINPUTMAPPING
_IOMAPPING.fields_by_name['output_mappings'].message_type = _TOPICOUTPUTMAPPING
_IOMAPPINGLIST.fields_by_name['elements'].message_type = _IOMAPPING
DESCRIPTOR.message_types_by_name['TopicInputMapping'] = _TOPICINPUTMAPPING
DESCRIPTOR.message_types_by_name['TopicInputMappingList'] = _TOPICINPUTMAPPINGLIST
DESCRIPTOR.message_types_by_name['TopicOutputMapping'] = _TOPICOUTPUTMAPPING
DESCRIPTOR.message_types_by_name['TopicOutputMappingList'] = _TOPICOUTPUTMAPPINGLIST
DESCRIPTOR.message_types_by_name['IOMapping'] = _IOMAPPING
DESCRIPTOR.message_types_by_name['IOMappingList'] = _IOMAPPINGLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TopicInputMapping = _reflection.GeneratedProtocolMessageType('TopicInputMapping', (_message.Message,), dict(
  DESCRIPTOR = _TOPICINPUTMAPPING,
  __module__ = 'proto.sessions.ioMappings_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.TopicInputMapping)
  ))
_sym_db.RegisterMessage(TopicInputMapping)

TopicInputMappingList = _reflection.GeneratedProtocolMessageType('TopicInputMappingList', (_message.Message,), dict(
  DESCRIPTOR = _TOPICINPUTMAPPINGLIST,
  __module__ = 'proto.sessions.ioMappings_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.TopicInputMappingList)
  ))
_sym_db.RegisterMessage(TopicInputMappingList)

TopicOutputMapping = _reflection.GeneratedProtocolMessageType('TopicOutputMapping', (_message.Message,), dict(
  DESCRIPTOR = _TOPICOUTPUTMAPPING,
  __module__ = 'proto.sessions.ioMappings_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.TopicOutputMapping)
  ))
_sym_db.RegisterMessage(TopicOutputMapping)

TopicOutputMappingList = _reflection.GeneratedProtocolMessageType('TopicOutputMappingList', (_message.Message,), dict(
  DESCRIPTOR = _TOPICOUTPUTMAPPINGLIST,
  __module__ = 'proto.sessions.ioMappings_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.TopicOutputMappingList)
  ))
_sym_db.RegisterMessage(TopicOutputMappingList)

IOMapping = _reflection.GeneratedProtocolMessageType('IOMapping', (_message.Message,), dict(
  DESCRIPTOR = _IOMAPPING,
  __module__ = 'proto.sessions.ioMappings_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.IOMapping)
  ))
_sym_db.RegisterMessage(IOMapping)

IOMappingList = _reflection.GeneratedProtocolMessageType('IOMappingList', (_message.Message,), dict(
  DESCRIPTOR = _IOMAPPINGLIST,
  __module__ = 'proto.sessions.ioMappings_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.IOMappingList)
  ))
_sym_db.RegisterMessage(IOMappingList)


# @@protoc_insertion_point(module_scope)