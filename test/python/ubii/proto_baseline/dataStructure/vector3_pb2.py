# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_baseline/dataStructure/vector3.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n/ubii/proto_baseline/dataStructure/vector3.proto\x12!ubii.proto_baseline.dataStructure\"*\n\x07Vector3\x12\t\n\x01x\x18\x01 \x01(\x01\x12\t\n\x01y\x18\x02 \x01(\x01\x12\t\n\x01z\x18\x03 \x01(\x01\"K\n\x0bVector3List\x12<\n\x08\x65lements\x18\x01 \x03(\x0b\x32*.ubii.proto_baseline.dataStructure.Vector3b\x06proto3')



_VECTOR3 = DESCRIPTOR.message_types_by_name['Vector3']
_VECTOR3LIST = DESCRIPTOR.message_types_by_name['Vector3List']
Vector3 = _reflection.GeneratedProtocolMessageType('Vector3', (_message.Message,), {
  'DESCRIPTOR' : _VECTOR3,
  '__module__' : 'ubii.proto_baseline.dataStructure.vector3_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.dataStructure.Vector3)
  })
_sym_db.RegisterMessage(Vector3)

Vector3List = _reflection.GeneratedProtocolMessageType('Vector3List', (_message.Message,), {
  'DESCRIPTOR' : _VECTOR3LIST,
  '__module__' : 'ubii.proto_baseline.dataStructure.vector3_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.dataStructure.Vector3List)
  })
_sym_db.RegisterMessage(Vector3List)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _VECTOR3._serialized_start=86
  _VECTOR3._serialized_end=128
  _VECTOR3LIST._serialized_start=130
  _VECTOR3LIST._serialized_end=205
# @@protoc_insertion_point(module_scope)