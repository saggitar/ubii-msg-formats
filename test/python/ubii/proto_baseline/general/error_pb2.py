# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_baseline/general/error.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\'ubii/proto_baseline/general/error.proto\x12\x1bubii.proto_baseline.general\"6\n\x05\x45rror\x12\r\n\x05title\x18\x01 \x01(\t\x12\x0f\n\x07message\x18\x02 \x01(\t\x12\r\n\x05stack\x18\x03 \x01(\t\"A\n\tErrorList\x12\x34\n\x08\x65lements\x18\x01 \x03(\x0b\x32\".ubii.proto_baseline.general.Errorb\x06proto3')



_ERROR = DESCRIPTOR.message_types_by_name['Error']
_ERRORLIST = DESCRIPTOR.message_types_by_name['ErrorList']
Error = _reflection.GeneratedProtocolMessageType('Error', (_message.Message,), {
  'DESCRIPTOR' : _ERROR,
  '__module__' : 'ubii.proto_baseline.general.error_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.general.Error)
  })
_sym_db.RegisterMessage(Error)

ErrorList = _reflection.GeneratedProtocolMessageType('ErrorList', (_message.Message,), {
  'DESCRIPTOR' : _ERRORLIST,
  '__module__' : 'ubii.proto_baseline.general.error_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.general.ErrorList)
  })
_sym_db.RegisterMessage(ErrorList)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _ERROR._serialized_start=72
  _ERROR._serialized_end=126
  _ERRORLIST._serialized_start=128
  _ERRORLIST._serialized_end=193
# @@protoc_insertion_point(module_scope)