"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class Color(proto.message.Message):
    r = proto.Field(proto.DOUBLE, number=0)
    g = proto.Field(proto.DOUBLE, number=1)
    b = proto.Field(proto.DOUBLE, number=2)
    a = proto.Field(proto.DOUBLE, number=3)