# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_v2/types/dataStructure/pose2d.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto_v2.types.dataStructure import vector2_pb2 as ubii_dot_proto__v2_dot_types_dot_dataStructure_dot_vector2__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ubii/proto_v2/types/dataStructure/pose2d.proto',
  package='ubii.proto_v2.types.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n.ubii/proto_v2/types/dataStructure/pose2d.proto\x12!ubii.proto_v2.types.dataStructure\x1a/ubii/proto_v2/types/dataStructure/vector2.proto\"\xa7\x01\n\x06Pose2D\x12<\n\x08position\x18\x01 \x01(\x0b\x32*.ubii.proto_v2.types.dataStructure.Vector2\x12?\n\tdirection\x18\x02 \x01(\x0b\x32*.ubii.proto_v2.types.dataStructure.Vector2H\x00\x12\x0f\n\x05\x61ngle\x18\x03 \x01(\x02H\x00\x42\r\n\x0borientationb\x06proto3'
  ,
  dependencies=[ubii_dot_proto__v2_dot_types_dot_dataStructure_dot_vector2__pb2.DESCRIPTOR,])




_POSE2D = _descriptor.Descriptor(
  name='Pose2D',
  full_name='ubii.proto_v2.types.dataStructure.Pose2D',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='position', full_name='ubii.proto_v2.types.dataStructure.Pose2D.position', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='direction', full_name='ubii.proto_v2.types.dataStructure.Pose2D.direction', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='angle', full_name='ubii.proto_v2.types.dataStructure.Pose2D.angle', index=2,
      number=3, type=2, cpp_type=6, label=1,
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
    _descriptor.OneofDescriptor(
      name='orientation', full_name='ubii.proto_v2.types.dataStructure.Pose2D.orientation',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=135,
  serialized_end=302,
)

_POSE2D.fields_by_name['position'].message_type = ubii_dot_proto__v2_dot_types_dot_dataStructure_dot_vector2__pb2._VECTOR2
_POSE2D.fields_by_name['direction'].message_type = ubii_dot_proto__v2_dot_types_dot_dataStructure_dot_vector2__pb2._VECTOR2
_POSE2D.oneofs_by_name['orientation'].fields.append(
  _POSE2D.fields_by_name['direction'])
_POSE2D.fields_by_name['direction'].containing_oneof = _POSE2D.oneofs_by_name['orientation']
_POSE2D.oneofs_by_name['orientation'].fields.append(
  _POSE2D.fields_by_name['angle'])
_POSE2D.fields_by_name['angle'].containing_oneof = _POSE2D.oneofs_by_name['orientation']
DESCRIPTOR.message_types_by_name['Pose2D'] = _POSE2D
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Pose2D = _reflection.GeneratedProtocolMessageType('Pose2D', (_message.Message,), {
  'DESCRIPTOR' : _POSE2D,
  '__module__' : 'ubii.proto_v2.types.dataStructure.pose2d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_v2.types.dataStructure.Pose2D)
  })
_sym_db.RegisterMessage(Pose2D)


# @@protoc_insertion_point(module_scope)
