# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_v2/types/dataStructure/vector2.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='ubii/proto_v2/types/dataStructure/vector2.proto',
  package='ubii.proto_v2.types.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n/ubii/proto_v2/types/dataStructure/vector2.proto\x12!ubii.proto_v2.types.dataStructure\"\x1f\n\x07Vector2\x12\t\n\x01x\x18\x01 \x01(\x01\x12\t\n\x01y\x18\x02 \x01(\x01\"K\n\x0bVector2List\x12<\n\x08\x65lements\x18\x01 \x03(\x0b\x32*.ubii.proto_v2.types.dataStructure.Vector2b\x06proto3'
)




_VECTOR2 = _descriptor.Descriptor(
  name='Vector2',
  full_name='ubii.proto_v2.types.dataStructure.Vector2',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='x', full_name='ubii.proto_v2.types.dataStructure.Vector2.x', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='y', full_name='ubii.proto_v2.types.dataStructure.Vector2.y', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
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
  serialized_start=86,
  serialized_end=117,
)


_VECTOR2LIST = _descriptor.Descriptor(
  name='Vector2List',
  full_name='ubii.proto_v2.types.dataStructure.Vector2List',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.proto_v2.types.dataStructure.Vector2List.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=119,
  serialized_end=194,
)

_VECTOR2LIST.fields_by_name['elements'].message_type = _VECTOR2
DESCRIPTOR.message_types_by_name['Vector2'] = _VECTOR2
DESCRIPTOR.message_types_by_name['Vector2List'] = _VECTOR2LIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Vector2 = _reflection.GeneratedProtocolMessageType('Vector2', (_message.Message,), {
  'DESCRIPTOR' : _VECTOR2,
  '__module__' : 'ubii.proto_v2.types.dataStructure.vector2_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_v2.types.dataStructure.Vector2)
  })
_sym_db.RegisterMessage(Vector2)

Vector2List = _reflection.GeneratedProtocolMessageType('Vector2List', (_message.Message,), {
  'DESCRIPTOR' : _VECTOR2LIST,
  '__module__' : 'ubii.proto_v2.types.dataStructure.vector2_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_v2.types.dataStructure.Vector2List)
  })
_sym_db.RegisterMessage(Vector2List)


# @@protoc_insertion_point(module_scope)
