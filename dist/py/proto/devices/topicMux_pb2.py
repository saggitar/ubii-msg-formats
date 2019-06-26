# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/devices/topicMux.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/devices/topicMux.proto',
  package='ubii.devices',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x1cproto/devices/topicMux.proto\x12\x0cubii.devices\"o\n\x08TopicMux\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x11\n\tdata_type\x18\x03 \x01(\t\x12\x16\n\x0etopic_selector\x18\x04 \x01(\t\x12\x1e\n\x16identity_match_pattern\x18\x05 \x01(\t\"8\n\x0cTopicMuxList\x12(\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x16.ubii.devices.TopicMuxb\x06proto3')
)




_TOPICMUX = _descriptor.Descriptor(
  name='TopicMux',
  full_name='ubii.devices.TopicMux',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.devices.TopicMux.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.devices.TopicMux.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='data_type', full_name='ubii.devices.TopicMux.data_type', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_selector', full_name='ubii.devices.TopicMux.topic_selector', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='identity_match_pattern', full_name='ubii.devices.TopicMux.identity_match_pattern', index=4,
      number=5, type=9, cpp_type=9, label=1,
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
  serialized_start=46,
  serialized_end=157,
)


_TOPICMUXLIST = _descriptor.Descriptor(
  name='TopicMuxList',
  full_name='ubii.devices.TopicMuxList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.devices.TopicMuxList.elements', index=0,
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
  serialized_start=159,
  serialized_end=215,
)

_TOPICMUXLIST.fields_by_name['elements'].message_type = _TOPICMUX
DESCRIPTOR.message_types_by_name['TopicMux'] = _TOPICMUX
DESCRIPTOR.message_types_by_name['TopicMuxList'] = _TOPICMUXLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TopicMux = _reflection.GeneratedProtocolMessageType('TopicMux', (_message.Message,), dict(
  DESCRIPTOR = _TOPICMUX,
  __module__ = 'proto.devices.topicMux_pb2'
  # @@protoc_insertion_point(class_scope:ubii.devices.TopicMux)
  ))
_sym_db.RegisterMessage(TopicMux)

TopicMuxList = _reflection.GeneratedProtocolMessageType('TopicMuxList', (_message.Message,), dict(
  DESCRIPTOR = _TOPICMUXLIST,
  __module__ = 'proto.devices.topicMux_pb2'
  # @@protoc_insertion_point(class_scope:ubii.devices.TopicMuxList)
  ))
_sym_db.RegisterMessage(TopicMuxList)


# @@protoc_insertion_point(module_scope)