"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message
import ubii.proto.dataStructure.buttonEventType_pb_plus

class KeyEvent(proto.message.Message):
    type = proto.Field(ubii.proto.dataStructure.buttonEventType_pb_plus.ButtonEventType, number=0)
    key = proto.Field(proto.STRING, number=1)
