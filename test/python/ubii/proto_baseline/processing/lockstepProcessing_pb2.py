# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_baseline/processing/lockstepProcessing.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto_baseline.topicData import topicDataRecord_pb2 as ubii_dot_proto__baseline_dot_topicData_dot_topicDataRecord__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n7ubii/proto_baseline/processing/lockstepProcessing.proto\x12\x1eubii.proto_baseline.processing\x1a\x33ubii/proto_baseline/topicData/topicDataRecord.proto\"\x92\x01\n\x19LockstepProcessingRequest\x12\x1d\n\x15processing_module_ids\x18\x01 \x03(\t\x12?\n\x07records\x18\x02 \x03(\x0b\x32..ubii.proto_baseline.topicData.TopicDataRecord\x12\x15\n\rdelta_time_ms\x18\x03 \x01(\x05\"y\n\x17LockstepProcessingReply\x12\x1d\n\x15processing_module_ids\x18\x01 \x03(\t\x12?\n\x07records\x18\x02 \x03(\x0b\x32..ubii.proto_baseline.topicData.TopicDataRecordb\x06proto3')



_LOCKSTEPPROCESSINGREQUEST = DESCRIPTOR.message_types_by_name['LockstepProcessingRequest']
_LOCKSTEPPROCESSINGREPLY = DESCRIPTOR.message_types_by_name['LockstepProcessingReply']
LockstepProcessingRequest = _reflection.GeneratedProtocolMessageType('LockstepProcessingRequest', (_message.Message,), {
  'DESCRIPTOR' : _LOCKSTEPPROCESSINGREQUEST,
  '__module__' : 'ubii.proto_baseline.processing.lockstepProcessing_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.processing.LockstepProcessingRequest)
  })
_sym_db.RegisterMessage(LockstepProcessingRequest)

LockstepProcessingReply = _reflection.GeneratedProtocolMessageType('LockstepProcessingReply', (_message.Message,), {
  'DESCRIPTOR' : _LOCKSTEPPROCESSINGREPLY,
  '__module__' : 'ubii.proto_baseline.processing.lockstepProcessing_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.processing.LockstepProcessingReply)
  })
_sym_db.RegisterMessage(LockstepProcessingReply)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _LOCKSTEPPROCESSINGREQUEST._serialized_start=145
  _LOCKSTEPPROCESSINGREQUEST._serialized_end=291
  _LOCKSTEPPROCESSINGREPLY._serialized_start=293
  _LOCKSTEPPROCESSINGREPLY._serialized_end=414
# @@protoc_insertion_point(module_scope)
