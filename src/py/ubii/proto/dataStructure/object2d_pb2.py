# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto/dataStructure/object2d.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto.dataStructure import pose2d_pb2 as ubii_dot_proto_dot_dataStructure_dot_pose2d__pb2
from ubii.proto.dataStructure import vector2_pb2 as ubii_dot_proto_dot_dataStructure_dot_vector2__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ubii/proto/dataStructure/object2d.proto',
  package='ubii.proto.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\'ubii/proto/dataStructure/object2d.proto\x12\x18ubii.proto.dataStructure\x1a%ubii/proto/dataStructure/pose2d.proto\x1a&ubii/proto/dataStructure/vector2.proto\"\x8f\x01\n\x08Object2D\x12\n\n\x02id\x18\x01 \x01(\t\x12.\n\x04pose\x18\x02 \x01(\x0b\x32 .ubii.proto.dataStructure.Pose2D\x12/\n\x04size\x18\x03 \x01(\x0b\x32!.ubii.proto.dataStructure.Vector2\x12\x16\n\x0euser_data_json\x18\x04 \x01(\t\"D\n\x0cObject2DList\x12\x34\n\x08\x65lements\x18\x01 \x03(\x0b\x32\".ubii.proto.dataStructure.Object2Db\x06proto3'
  ,
  dependencies=[ubii_dot_proto_dot_dataStructure_dot_pose2d__pb2.DESCRIPTOR,ubii_dot_proto_dot_dataStructure_dot_vector2__pb2.DESCRIPTOR,])




_OBJECT2D = _descriptor.Descriptor(
  name='Object2D',
  full_name='ubii.proto.dataStructure.Object2D',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.proto.dataStructure.Object2D.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='pose', full_name='ubii.proto.dataStructure.Object2D.pose', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='size', full_name='ubii.proto.dataStructure.Object2D.size', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='user_data_json', full_name='ubii.proto.dataStructure.Object2D.user_data_json', index=3,
      number=4, type=9, cpp_type=9, label=1,
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
  serialized_start=149,
  serialized_end=292,
)


_OBJECT2DLIST = _descriptor.Descriptor(
  name='Object2DList',
  full_name='ubii.proto.dataStructure.Object2DList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.proto.dataStructure.Object2DList.elements', index=0,
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
  serialized_start=294,
  serialized_end=362,
)

_OBJECT2D.fields_by_name['pose'].message_type = ubii_dot_proto_dot_dataStructure_dot_pose2d__pb2._POSE2D
_OBJECT2D.fields_by_name['size'].message_type = ubii_dot_proto_dot_dataStructure_dot_vector2__pb2._VECTOR2
_OBJECT2DLIST.fields_by_name['elements'].message_type = _OBJECT2D
DESCRIPTOR.message_types_by_name['Object2D'] = _OBJECT2D
DESCRIPTOR.message_types_by_name['Object2DList'] = _OBJECT2DLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Object2D = _reflection.GeneratedProtocolMessageType('Object2D', (_message.Message,), {
  'DESCRIPTOR' : _OBJECT2D,
  '__module__' : 'ubii.proto.dataStructure.object2d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto.dataStructure.Object2D)
  })
_sym_db.RegisterMessage(Object2D)

Object2DList = _reflection.GeneratedProtocolMessageType('Object2DList', (_message.Message,), {
  'DESCRIPTOR' : _OBJECT2DLIST,
  '__module__' : 'ubii.proto.dataStructure.object2d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto.dataStructure.Object2DList)
  })
_sym_db.RegisterMessage(Object2DList)


# @@protoc_insertion_point(module_scope)