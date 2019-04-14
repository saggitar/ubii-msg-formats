# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/topicDataRecord.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.topicData.topicDataRecord.dataStructure import vector2_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2
from proto.topicData.topicDataRecord.dataStructure import vector3_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2
from proto.topicData.topicDataRecord.dataStructure import vector4_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector4__pb2
from proto.topicData.topicDataRecord.dataStructure import quaternion_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2
from proto.topicData.topicDataRecord.dataStructure import matrix3x2_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix3x2__pb2
from proto.topicData.topicDataRecord.dataStructure import matrix4x4_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix4x4__pb2
from proto.topicData.topicDataRecord.dataStructure import color_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_color__pb2
from proto.topicData.topicDataRecord import timestamp_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/topicDataRecord.proto',
  package='ubii.topicData',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n5proto/topicData/topicDataRecord/topicDataRecord.proto\x12\x0eubii.topicData\x1a;proto/topicData/topicDataRecord/dataStructure/vector2.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector3.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector4.proto\x1a>proto/topicData/topicDataRecord/dataStructure/quaternion.proto\x1a=proto/topicData/topicDataRecord/dataStructure/matrix3x2.proto\x1a=proto/topicData/topicDataRecord/dataStructure/matrix4x4.proto\x1a\x39proto/topicData/topicDataRecord/dataStructure/color.proto\x1a/proto/topicData/topicDataRecord/timestamp.proto\"\xe7\x03\n\x0fTopicDataRecord\x12\r\n\x05topic\x18\x01 \x01(\t\x12\x10\n\x06number\x18\x02 \x01(\x01H\x00\x12\x11\n\x07\x62oolean\x18\x03 \x01(\x08H\x00\x12\x10\n\x06string\x18\x04 \x01(\tH\x00\x12.\n\x07vector2\x18\x05 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector2H\x00\x12.\n\x07vector3\x18\x06 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector3H\x00\x12.\n\x07vector4\x18\x07 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector4H\x00\x12\x34\n\nquaternion\x18\x08 \x01(\x0b\x32\x1e.ubii.dataStructure.QuaternionH\x00\x12\x32\n\tmatrix3x2\x18\t \x01(\x0b\x32\x1d.ubii.dataStructure.Matrix3x2H\x00\x12\x32\n\tmatrix4x4\x18\n \x01(\x0b\x32\x1d.ubii.dataStructure.Matrix4x4H\x00\x12*\n\x05\x63olor\x18\x0b \x01(\x0b\x32\x19.ubii.dataStructure.ColorH\x00\x12,\n\ttimestamp\x18\x0c \x01(\x0b\x32\x19.ubii.topicData.TimestampB\x06\n\x04type\"H\n\x13TopicDataRecordList\x12\x31\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x1f.ubii.topicData.TopicDataRecordb\x06proto3')
  ,
  dependencies=[proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector4__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix3x2__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix4x4__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_color__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_timestamp__pb2.DESCRIPTOR,])




_TOPICDATARECORD = _descriptor.Descriptor(
  name='TopicDataRecord',
  full_name='ubii.topicData.TopicDataRecord',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='topic', full_name='ubii.topicData.TopicDataRecord.topic', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='number', full_name='ubii.topicData.TopicDataRecord.number', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='boolean', full_name='ubii.topicData.TopicDataRecord.boolean', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='string', full_name='ubii.topicData.TopicDataRecord.string', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vector2', full_name='ubii.topicData.TopicDataRecord.vector2', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vector3', full_name='ubii.topicData.TopicDataRecord.vector3', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vector4', full_name='ubii.topicData.TopicDataRecord.vector4', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='quaternion', full_name='ubii.topicData.TopicDataRecord.quaternion', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='matrix3x2', full_name='ubii.topicData.TopicDataRecord.matrix3x2', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='matrix4x4', full_name='ubii.topicData.TopicDataRecord.matrix4x4', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='color', full_name='ubii.topicData.TopicDataRecord.color', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='ubii.topicData.TopicDataRecord.timestamp', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
    _descriptor.OneofDescriptor(
      name='type', full_name='ubii.topicData.TopicDataRecord.type',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=555,
  serialized_end=1042,
)


_TOPICDATARECORDLIST = _descriptor.Descriptor(
  name='TopicDataRecordList',
  full_name='ubii.topicData.TopicDataRecordList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.topicData.TopicDataRecordList.elements', index=0,
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
  serialized_start=1044,
  serialized_end=1116,
)

_TOPICDATARECORD.fields_by_name['vector2'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2._VECTOR2
_TOPICDATARECORD.fields_by_name['vector3'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2._VECTOR3
_TOPICDATARECORD.fields_by_name['vector4'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector4__pb2._VECTOR4
_TOPICDATARECORD.fields_by_name['quaternion'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2._QUATERNION
_TOPICDATARECORD.fields_by_name['matrix3x2'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix3x2__pb2._MATRIX3X2
_TOPICDATARECORD.fields_by_name['matrix4x4'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix4x4__pb2._MATRIX4X4
_TOPICDATARECORD.fields_by_name['color'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_color__pb2._COLOR
_TOPICDATARECORD.fields_by_name['timestamp'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_timestamp__pb2._TIMESTAMP
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['number'])
_TOPICDATARECORD.fields_by_name['number'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['boolean'])
_TOPICDATARECORD.fields_by_name['boolean'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['string'])
_TOPICDATARECORD.fields_by_name['string'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['vector2'])
_TOPICDATARECORD.fields_by_name['vector2'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['vector3'])
_TOPICDATARECORD.fields_by_name['vector3'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['vector4'])
_TOPICDATARECORD.fields_by_name['vector4'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['quaternion'])
_TOPICDATARECORD.fields_by_name['quaternion'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['matrix3x2'])
_TOPICDATARECORD.fields_by_name['matrix3x2'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['matrix4x4'])
_TOPICDATARECORD.fields_by_name['matrix4x4'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['color'])
_TOPICDATARECORD.fields_by_name['color'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORDLIST.fields_by_name['elements'].message_type = _TOPICDATARECORD
DESCRIPTOR.message_types_by_name['TopicDataRecord'] = _TOPICDATARECORD
DESCRIPTOR.message_types_by_name['TopicDataRecordList'] = _TOPICDATARECORDLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TopicDataRecord = _reflection.GeneratedProtocolMessageType('TopicDataRecord', (_message.Message,), dict(
  DESCRIPTOR = _TOPICDATARECORD,
  __module__ = 'proto.topicData.topicDataRecord.topicDataRecord_pb2'
  # @@protoc_insertion_point(class_scope:ubii.topicData.TopicDataRecord)
  ))
_sym_db.RegisterMessage(TopicDataRecord)

TopicDataRecordList = _reflection.GeneratedProtocolMessageType('TopicDataRecordList', (_message.Message,), dict(
  DESCRIPTOR = _TOPICDATARECORDLIST,
  __module__ = 'proto.topicData.topicDataRecord.topicDataRecord_pb2'
  # @@protoc_insertion_point(class_scope:ubii.topicData.TopicDataRecordList)
  ))
_sym_db.RegisterMessage(TopicDataRecordList)


# @@protoc_insertion_point(module_scope)
