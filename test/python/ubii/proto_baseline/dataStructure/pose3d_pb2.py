# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_baseline/dataStructure/pose3d.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto_baseline.dataStructure import vector3_pb2 as ubii_dot_proto__baseline_dot_dataStructure_dot_vector3__pb2
from ubii.proto_baseline.dataStructure import quaternion_pb2 as ubii_dot_proto__baseline_dot_dataStructure_dot_quaternion__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n.ubii/proto_baseline/dataStructure/pose3d.proto\x12!ubii.proto_baseline.dataStructure\x1a/ubii/proto_baseline/dataStructure/vector3.proto\x1a\x32ubii/proto_baseline/dataStructure/quaternion.proto\"\xd7\x01\n\x06Pose3D\x12<\n\x08position\x18\x01 \x01(\x0b\x32*.ubii.proto_baseline.dataStructure.Vector3\x12\x43\n\nquaternion\x18\x02 \x01(\x0b\x32-.ubii.proto_baseline.dataStructure.QuaternionH\x00\x12;\n\x05\x65uler\x18\x03 \x01(\x0b\x32*.ubii.proto_baseline.dataStructure.Vector3H\x00\x42\r\n\x0borientationb\x06proto3')



_POSE3D = DESCRIPTOR.message_types_by_name['Pose3D']
Pose3D = _reflection.GeneratedProtocolMessageType('Pose3D', (_message.Message,), {
  'DESCRIPTOR' : _POSE3D,
  '__module__' : 'ubii.proto_baseline.dataStructure.pose3d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.dataStructure.Pose3D)
  })
_sym_db.RegisterMessage(Pose3D)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _POSE3D._serialized_start=187
  _POSE3D._serialized_end=402
# @@protoc_insertion_point(module_scope)