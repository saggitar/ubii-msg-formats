# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_v2/types/dataStructure/mouseEvent.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto_v2.types.dataStructure import buttonEventType_pb2 as ubii_dot_proto__v2_dot_types_dot_dataStructure_dot_buttonEventType__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ubii/proto_v2/types/dataStructure/mouseEvent.proto',
  package='ubii.proto_v2.types.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n2ubii/proto_v2/types/dataStructure/mouseEvent.proto\x12!ubii.proto_v2.types.dataStructure\x1a\x37ubii/proto_v2/types/dataStructure/buttonEventType.proto\"^\n\nMouseEvent\x12@\n\x04type\x18\x01 \x01(\x0e\x32\x32.ubii.proto_v2.types.dataStructure.ButtonEventType\x12\x0e\n\x06\x62utton\x18\x02 \x01(\x05\x62\x06proto3'
  ,
  dependencies=[ubii_dot_proto__v2_dot_types_dot_dataStructure_dot_buttonEventType__pb2.DESCRIPTOR,])




_MOUSEEVENT = _descriptor.Descriptor(
  name='MouseEvent',
  full_name='ubii.proto_v2.types.dataStructure.MouseEvent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='ubii.proto_v2.types.dataStructure.MouseEvent.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='button', full_name='ubii.proto_v2.types.dataStructure.MouseEvent.button', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=146,
  serialized_end=240,
)

_MOUSEEVENT.fields_by_name['type'].enum_type = ubii_dot_proto__v2_dot_types_dot_dataStructure_dot_buttonEventType__pb2._BUTTONEVENTTYPE
DESCRIPTOR.message_types_by_name['MouseEvent'] = _MOUSEEVENT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

MouseEvent = _reflection.GeneratedProtocolMessageType('MouseEvent', (_message.Message,), {
  'DESCRIPTOR' : _MOUSEEVENT,
  '__module__' : 'ubii.proto_v2.types.dataStructure.mouseEvent_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_v2.types.dataStructure.MouseEvent)
  })
_sym_db.RegisterMessage(MouseEvent)


# @@protoc_insertion_point(module_scope)
