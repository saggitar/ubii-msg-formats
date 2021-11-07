"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class Service(proto.message.Message):
    topic = proto.Field(proto.STRING, number=0)
    request_message_format = proto.Field(proto.STRING, number=1)
    response_message_format = proto.Field(proto.STRING, number=2)
    tags = proto.RepeatedField(proto.STRING, number=3)
    description = proto.Field(proto.STRING, number=4)

class ServiceList(proto.message.Message):
    elements = proto.RepeatedField(Service, number=0)
