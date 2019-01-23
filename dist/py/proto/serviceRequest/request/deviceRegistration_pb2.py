# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/serviceRequest/request/deviceRegistration.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/serviceRequest/request/deviceRegistration.proto',
  package='ubii.service.request',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n5proto/serviceRequest/request/deviceRegistration.proto\x12\x14ubii.service.request\"\xc1\x01\n\x12\x44\x65viceRegistration\x12\x0c\n\x04name\x18\x01 \x01(\t\x12H\n\x0b\x64\x65vice_type\x18\x02 \x01(\x0e\x32\x33.ubii.service.request.DeviceRegistration.DeviceType\x12\'\n\x1f\x63orresponding_client_identifier\x18\x03 \x01(\t\"*\n\nDeviceType\x12\x0f\n\x0bPARTICIPANT\x10\x00\x12\x0b\n\x07WATCHER\x10\x01\x62\x06proto3')
)



_DEVICEREGISTRATION_DEVICETYPE = _descriptor.EnumDescriptor(
  name='DeviceType',
  full_name='ubii.service.request.DeviceRegistration.DeviceType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PARTICIPANT', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='WATCHER', index=1, number=1,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=231,
  serialized_end=273,
)
_sym_db.RegisterEnumDescriptor(_DEVICEREGISTRATION_DEVICETYPE)


_DEVICEREGISTRATION = _descriptor.Descriptor(
  name='DeviceRegistration',
  full_name='ubii.service.request.DeviceRegistration',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.service.request.DeviceRegistration.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='device_type', full_name='ubii.service.request.DeviceRegistration.device_type', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='corresponding_client_identifier', full_name='ubii.service.request.DeviceRegistration.corresponding_client_identifier', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _DEVICEREGISTRATION_DEVICETYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=80,
  serialized_end=273,
)

_DEVICEREGISTRATION.fields_by_name['device_type'].enum_type = _DEVICEREGISTRATION_DEVICETYPE
_DEVICEREGISTRATION_DEVICETYPE.containing_type = _DEVICEREGISTRATION
DESCRIPTOR.message_types_by_name['DeviceRegistration'] = _DEVICEREGISTRATION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

DeviceRegistration = _reflection.GeneratedProtocolMessageType('DeviceRegistration', (_message.Message,), dict(
  DESCRIPTOR = _DEVICEREGISTRATION,
  __module__ = 'proto.serviceRequest.request.deviceRegistration_pb2'
  # @@protoc_insertion_point(class_scope:ubii.service.request.DeviceRegistration)
  ))
_sym_db.RegisterMessage(DeviceRegistration)


# @@protoc_insertion_point(module_scope)
