"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class TopicMux(proto.message.Message):
    id = proto.Field(proto.STRING, number=0)
    name = proto.Field(proto.STRING, number=1)
    data_type = proto.Field(proto.STRING, number=2)
    topic_selector = proto.Field(proto.STRING, number=3)
    identity_match_pattern = proto.Field(proto.STRING, number=4)

class TopicMuxList(proto.message.Message):
    elements = proto.RepeatedField(TopicMux, number=0)