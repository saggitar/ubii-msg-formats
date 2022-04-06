# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/dataStructure/pose3d.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.dataStructure import vector3_pb2 as proto_dot_dataStructure_dot_vector3__pb2
from proto.dataStructure import quaternion_pb2 as proto_dot_dataStructure_dot_quaternion__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/dataStructure/pose3d.proto',
  package='ubii.dataStructure',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n proto/dataStructure/pose3d.proto\x12\x12ubii.dataStructure\x1a!proto/dataStructure/vector3.proto\x1a$proto/dataStructure/quaternion.proto\"\xaa\x01\n\x06Pose3D\x12-\n\x08position\x18\x01 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector3\x12\x34\n\nquaternion\x18\x02 \x01(\x0b\x32\x1e.ubii.dataStructure.QuaternionH\x00\x12,\n\x05\x65uler\x18\x03 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector3H\x00\x42\r\n\x0borientationb\x06proto3')
  ,
  dependencies=[proto_dot_dataStructure_dot_vector3__pb2.DESCRIPTOR,proto_dot_dataStructure_dot_quaternion__pb2.DESCRIPTOR,])




_POSE3D = _descriptor.Descriptor(
  name='Pose3D',
  full_name='ubii.dataStructure.Pose3D',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='position', full_name='ubii.dataStructure.Pose3D.position', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='quaternion', full_name='ubii.dataStructure.Pose3D.quaternion', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='euler', full_name='ubii.dataStructure.Pose3D.euler', index=2,
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
      name='orientation', full_name='ubii.dataStructure.Pose3D.orientation',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=130,
  serialized_end=300,
)

_POSE3D.fields_by_name['position'].message_type = proto_dot_dataStructure_dot_vector3__pb2._VECTOR3
_POSE3D.fields_by_name['quaternion'].message_type = proto_dot_dataStructure_dot_quaternion__pb2._QUATERNION
_POSE3D.fields_by_name['euler'].message_type = proto_dot_dataStructure_dot_vector3__pb2._VECTOR3
_POSE3D.oneofs_by_name['orientation'].fields.append(
  _POSE3D.fields_by_name['quaternion'])
_POSE3D.fields_by_name['quaternion'].containing_oneof = _POSE3D.oneofs_by_name['orientation']
_POSE3D.oneofs_by_name['orientation'].fields.append(
  _POSE3D.fields_by_name['euler'])
_POSE3D.fields_by_name['euler'].containing_oneof = _POSE3D.oneofs_by_name['orientation']
DESCRIPTOR.message_types_by_name['Pose3D'] = _POSE3D
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Pose3D = _reflection.GeneratedProtocolMessageType('Pose3D', (_message.Message,), dict(
  DESCRIPTOR = _POSE3D,
  __module__ = 'proto.dataStructure.pose3d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.dataStructure.Pose3D)
  ))
_sym_db.RegisterMessage(Pose3D)


# @@protoc_insertion_point(module_scope)