# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_baseline/dataStructure/mouseEvent.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ubii.proto_baseline.dataStructure import buttonEventType_pb2 as ubii_dot_proto__baseline_dot_dataStructure_dot_buttonEventType__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n2ubii/proto_baseline/dataStructure/mouseEvent.proto\x12!ubii.proto_baseline.dataStructure\x1a\x37ubii/proto_baseline/dataStructure/buttonEventType.proto\"^\n\nMouseEvent\x12@\n\x04type\x18\x01 \x01(\x0e\x32\x32.ubii.proto_baseline.dataStructure.ButtonEventType\x12\x0e\n\x06\x62utton\x18\x02 \x01(\x05\x62\x06proto3')



_MOUSEEVENT = DESCRIPTOR.message_types_by_name['MouseEvent']
MouseEvent = _reflection.GeneratedProtocolMessageType('MouseEvent', (_message.Message,), {
  'DESCRIPTOR' : _MOUSEEVENT,
  '__module__' : 'ubii.proto_baseline.dataStructure.mouseEvent_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.dataStructure.MouseEvent)
  })
_sym_db.RegisterMessage(MouseEvent)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _MOUSEEVENT._serialized_start=146
  _MOUSEEVENT._serialized_end=240
# @@protoc_insertion_point(module_scope)
