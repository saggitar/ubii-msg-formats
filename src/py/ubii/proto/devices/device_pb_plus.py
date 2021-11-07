"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message
import ubii.proto.devices.component_pb_plus

class Device(proto.message.Message):
    class DeviceType(proto.Enum):
        PARTICIPANT = 0
        WATCHER = 1

    id = proto.Field(proto.STRING, number=0)
    name = proto.Field(proto.STRING, number=1)
    device_type = proto.Field(DeviceType, number=2)
    components = proto.RepeatedField(ubii.proto.devices.component_pb_plus.Component, number=3)
    client_id = proto.Field(proto.STRING, number=4)
    tags = proto.RepeatedField(proto.STRING, number=5)
    description = proto.Field(proto.STRING, number=6)

class DeviceList(proto.message.Message):
    elements = proto.RepeatedField(Device, number=0)