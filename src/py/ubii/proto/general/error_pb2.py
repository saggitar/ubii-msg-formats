# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ubii/proto/general/error.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='ubii/proto/general/error.proto',
  package='ubii.proto.general',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1eubii/proto/general/error.proto\x12\x12ubii.proto.general\"6\n\x05\x45rror\x12\r\n\x05title\x18\x01 \x01(\t\x12\x0f\n\x07message\x18\x02 \x01(\t\x12\r\n\x05stack\x18\x03 \x01(\t\"8\n\tErrorList\x12+\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x19.ubii.proto.general.Errorb\x06proto3'
)




_ERROR = _descriptor.Descriptor(
  name='Error',
  full_name='ubii.proto.general.Error',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='title', full_name='ubii.proto.general.Error.title', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='message', full_name='ubii.proto.general.Error.message', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stack', full_name='ubii.proto.general.Error.stack', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
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
  ],
  serialized_start=54,
  serialized_end=108,
)


_ERRORLIST = _descriptor.Descriptor(
  name='ErrorList',
  full_name='ubii.proto.general.ErrorList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.proto.general.ErrorList.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  ],
  serialized_start=110,
  serialized_end=166,
)

_ERRORLIST.fields_by_name['elements'].message_type = _ERROR
DESCRIPTOR.message_types_by_name['Error'] = _ERROR
DESCRIPTOR.message_types_by_name['ErrorList'] = _ERRORLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Error = _reflection.GeneratedProtocolMessageType('Error', (_message.Message,), {
  'DESCRIPTOR' : _ERROR,
  '__module__' : 'ubii.proto.general.error_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto.general.Error)
  })
_sym_db.RegisterMessage(Error)

ErrorList = _reflection.GeneratedProtocolMessageType('ErrorList', (_message.Message,), {
  'DESCRIPTOR' : _ERRORLIST,
  '__module__' : 'ubii.proto.general.error_pb2'
  # @@protoc_insertion_point(class_scope:ubii.proto.general.ErrorList)
  })
_sym_db.RegisterMessage(ErrorList)


# @@protoc_insertion_point(module_scope)
