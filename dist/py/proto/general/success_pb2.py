# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/general/success.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/general/success.proto',
  package='ubii.general',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=b'\n\x1bproto/general/success.proto\x12\x0cubii.general\")\n\x07Success\x12\r\n\x05title\x18\x01 \x01(\t\x12\x0f\n\x07message\x18\x02 \x01(\t\"6\n\x0bSuccessList\x12\'\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x15.ubii.general.Successb\x06proto3'
)




_SUCCESS = _descriptor.Descriptor(
  name='Success',
  full_name='ubii.general.Success',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='title', full_name='ubii.general.Success.title', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='message', full_name='ubii.general.Success.message', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
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
  ],
  serialized_start=45,
  serialized_end=86,
)


_SUCCESSLIST = _descriptor.Descriptor(
  name='SuccessList',
  full_name='ubii.general.SuccessList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.general.SuccessList.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  ],
  serialized_start=88,
  serialized_end=142,
)

_SUCCESSLIST.fields_by_name['elements'].message_type = _SUCCESS
DESCRIPTOR.message_types_by_name['Success'] = _SUCCESS
DESCRIPTOR.message_types_by_name['SuccessList'] = _SUCCESSLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Success = _reflection.GeneratedProtocolMessageType('Success', (_message.Message,), {
  'DESCRIPTOR' : _SUCCESS,
  '__module__' : 'proto.general.success_pb2'
  # @@protoc_insertion_point(class_scope:ubii.general.Success)
  })
_sym_db.RegisterMessage(Success)

SuccessList = _reflection.GeneratedProtocolMessageType('SuccessList', (_message.Message,), {
  'DESCRIPTOR' : _SUCCESSLIST,
  '__module__' : 'proto.general.success_pb2'
  # @@protoc_insertion_point(class_scope:ubii.general.SuccessList)
  })
_sym_db.RegisterMessage(SuccessList)


# @@protoc_insertion_point(module_scope)
