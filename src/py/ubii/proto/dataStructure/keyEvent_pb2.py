# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto/dataStructure/keyEvent.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto.dataStructure import buttonEventType_pb2 as ubii_dot_proto_dot_dataStructure_dot_buttonEventType__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ubii/proto/dataStructure/keyEvent.proto',
  package='ubii.proto.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\'ubii/proto/dataStructure/keyEvent.proto\x12\x18ubii.proto.dataStructure\x1a.ubii/proto/dataStructure/buttonEventType.proto\"P\n\x08KeyEvent\x12\x37\n\x04type\x18\x01 \x01(\x0e\x32).ubii.proto.dataStructure.ButtonEventType\x12\x0b\n\x03key\x18\x02 \x01(\tb\x06proto3'
  ,
  dependencies=[ubii_dot_proto_dot_dataStructure_dot_buttonEventType__pb2.DESCRIPTOR,])




_KEYEVENT = _descriptor.Descriptor(
  name='KeyEvent',
  full_name='ubii.proto.dataStructure.KeyEvent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='ubii.proto.dataStructure.KeyEvent.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='key', full_name='ubii.proto.dataStructure.KeyEvent.key', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
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
  ],
  serialized_start=117,
  serialized_end=197,
)

_KEYEVENT.fields_by_name['type'].enum_type = ubii_dot_proto_dot_dataStructure_dot_buttonEventType__pb2._BUTTONEVENTTYPE
DESCRIPTOR.message_types_by_name['KeyEvent'] = _KEYEVENT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

KeyEvent = _reflection.GeneratedProtocolMessageType('KeyEvent', (_message.Message,), {
  'DESCRIPTOR' : _KEYEVENT,
  '__module__' : 'ubii.proto.dataStructure.keyEvent_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto.dataStructure.KeyEvent)
  })
_sym_db.RegisterMessage(KeyEvent)


# @@protoc_insertion_point(module_scope)
