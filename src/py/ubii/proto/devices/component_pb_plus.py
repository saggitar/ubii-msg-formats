"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class Component(proto.message.Message):
    class IOType(proto.Enum):
        PUBLISHER = 0
        SUBSCRIBER = 1

    topic = proto.Field(proto.STRING, number=0)
    message_format = proto.Field(proto.STRING, number=1)
    io_type = proto.Field(IOType, number=2)
    device_id = proto.Field(proto.STRING, number=3)
    tags = proto.RepeatedField(proto.STRING, number=4)
    description = proto.Field(proto.STRING, number=5)
    id = proto.Field(proto.STRING, number=6)
    name = proto.Field(proto.STRING, number=7)

class ComponentList(proto.message.Message):
    elements = proto.RepeatedField(Component, number=0)
