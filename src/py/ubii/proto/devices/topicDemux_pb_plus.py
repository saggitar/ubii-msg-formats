"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message


class TopicDemux(proto.message.Message):
    id = proto.Field(
        proto.STRING,
        number=1,
    )
    name = proto.Field(
        proto.STRING,
        number=2,
    )
    data_type = proto.Field(
        proto.STRING,
        number=3,
    )
    output_topic_format = proto.Field(
        proto.STRING,
        number=4,
    )


class TopicDemuxList(proto.message.Message):
    elements = proto.RepeatedField(
        TopicDemux,
        number=1,
    )

