# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/dataStructure/pose2d.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.topicData.topicDataRecord.dataStructure import vector2_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/dataStructure/pose2d.proto',
  package='ubii.dataStructure',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n:proto/topicData/topicDataRecord/dataStructure/pose2d.proto\x12\x12ubii.dataStructure\x1a;proto/topicData/topicDataRecord/dataStructure/vector2.proto\"\x89\x01\n\x06Pose2D\x12-\n\x08position\x18\x01 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector2\x12\x30\n\tdirection\x18\x02 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector2H\x00\x12\x0f\n\x05\x61ngle\x18\x03 \x01(\x02H\x00\x42\r\n\x0borientationb\x06proto3')
  ,
  dependencies=[proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2.DESCRIPTOR,])




_POSE2D = _descriptor.Descriptor(
  name='Pose2D',
  full_name='ubii.dataStructure.Pose2D',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='position', full_name='ubii.dataStructure.Pose2D.position', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='direction', full_name='ubii.dataStructure.Pose2D.direction', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='angle', full_name='ubii.dataStructure.Pose2D.angle', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
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
      name='orientation', full_name='ubii.dataStructure.Pose2D.orientation',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=144,
  serialized_end=281,
)

_POSE2D.fields_by_name['position'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2._VECTOR2
_POSE2D.fields_by_name['direction'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2._VECTOR2
_POSE2D.oneofs_by_name['orientation'].fields.append(
  _POSE2D.fields_by_name['direction'])
_POSE2D.fields_by_name['direction'].containing_oneof = _POSE2D.oneofs_by_name['orientation']
_POSE2D.oneofs_by_name['orientation'].fields.append(
  _POSE2D.fields_by_name['angle'])
_POSE2D.fields_by_name['angle'].containing_oneof = _POSE2D.oneofs_by_name['orientation']
DESCRIPTOR.message_types_by_name['Pose2D'] = _POSE2D
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Pose2D = _reflection.GeneratedProtocolMessageType('Pose2D', (_message.Message,), dict(
  DESCRIPTOR = _POSE2D,
  __module__ = 'proto.topicData.topicDataRecord.dataStructure.pose2d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.dataStructure.Pose2D)
  ))
_sym_db.RegisterMessage(Pose2D)


# @@protoc_insertion_point(module_scope)