# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/serviceReply/reply/clientSpecification.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/serviceReply/reply/clientSpecification.proto',
  package='ubii.service.reply',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n2proto/serviceReply/reply/clientSpecification.proto\x12\x12ubii.service.reply\"t\n\x13\x43lientSpecification\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x11\n\tnamespace\x18\x02 \x01(\t\x12\x12\n\nidentifier\x18\x03 \x01(\t\x12\x13\n\x0btarget_host\x18\x04 \x01(\t\x12\x13\n\x0btarget_port\x18\x05 \x01(\tb\x06proto3')
)




_CLIENTSPECIFICATION = _descriptor.Descriptor(
  name='ClientSpecification',
  full_name='ubii.service.reply.ClientSpecification',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.service.reply.ClientSpecification.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='namespace', full_name='ubii.service.reply.ClientSpecification.namespace', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='identifier', full_name='ubii.service.reply.ClientSpecification.identifier', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='target_host', full_name='ubii.service.reply.ClientSpecification.target_host', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='target_port', full_name='ubii.service.reply.ClientSpecification.target_port', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=74,
  serialized_end=190,
)

DESCRIPTOR.message_types_by_name['ClientSpecification'] = _CLIENTSPECIFICATION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ClientSpecification = _reflection.GeneratedProtocolMessageType('ClientSpecification', (_message.Message,), dict(
  DESCRIPTOR = _CLIENTSPECIFICATION,
  __module__ = 'proto.serviceReply.reply.clientSpecification_pb2'
  # @@protoc_insertion_point(class_scope:ubii.service.reply.ClientSpecification)
  ))
_sym_db.RegisterMessage(ClientSpecification)


# @@protoc_insertion_point(module_scope)
