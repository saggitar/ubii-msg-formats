# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto_baseline/devices/component.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n+ubii/proto_baseline/devices/component.proto\x12\x1bubii.proto_baseline.devices\"\xeb\x01\n\tComponent\x12\r\n\x05topic\x18\x01 \x01(\t\x12\x16\n\x0emessage_format\x18\x02 \x01(\t\x12>\n\x07io_type\x18\x03 \x01(\x0e\x32-.ubii.proto_baseline.devices.Component.IOType\x12\x11\n\tdevice_id\x18\x04 \x01(\t\x12\x0c\n\x04tags\x18\x05 \x03(\t\x12\x13\n\x0b\x64\x65scription\x18\x06 \x01(\t\x12\n\n\x02id\x18\x07 \x01(\t\x12\x0c\n\x04name\x18\x08 \x01(\t\"\'\n\x06IOType\x12\r\n\tPUBLISHER\x10\x00\x12\x0e\n\nSUBSCRIBER\x10\x01\"I\n\rComponentList\x12\x38\n\x08\x65lements\x18\x01 \x03(\x0b\x32&.ubii.proto_baseline.devices.Componentb\x06proto3')



_COMPONENT = DESCRIPTOR.message_types_by_name['Component']
_COMPONENTLIST = DESCRIPTOR.message_types_by_name['ComponentList']
_COMPONENT_IOTYPE = _COMPONENT.enum_types_by_name['IOType']
Component = _reflection.GeneratedProtocolMessageType('Component', (_message.Message,), {
  'DESCRIPTOR' : _COMPONENT,
  '__module__' : 'ubii.proto_baseline.devices.component_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.devices.Component)
  })
_sym_db.RegisterMessage(Component)

ComponentList = _reflection.GeneratedProtocolMessageType('ComponentList', (_message.Message,), {
  'DESCRIPTOR' : _COMPONENTLIST,
  '__module__' : 'ubii.proto_baseline.devices.component_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto_baseline.devices.ComponentList)
  })
_sym_db.RegisterMessage(ComponentList)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _COMPONENT._serialized_start=77
  _COMPONENT._serialized_end=312
  _COMPONENT_IOTYPE._serialized_start=273
  _COMPONENT_IOTYPE._serialized_end=312
  _COMPONENTLIST._serialized_start=314
  _COMPONENTLIST._serialized_end=387
# @@protoc_insertion_point(module_scope)
