"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class Server(proto.message.Message):
    id = proto.Field(proto.STRING, number=0)
    name = proto.Field(proto.STRING, number=1)
    ip_ethernet = proto.Field(proto.STRING, number=2)
    ip_wlan = proto.Field(proto.STRING, number=3)
    port_service_zmq = proto.Field(proto.STRING, number=4)
    port_service_rest = proto.Field(proto.STRING, number=5)
    port_topic_data_zmq = proto.Field(proto.STRING, number=6)
    port_topic_data_ws = proto.Field(proto.STRING, number=7)
    constants_json = proto.Field(proto.STRING, number=8)