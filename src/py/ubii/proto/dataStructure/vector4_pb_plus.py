"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class Vector4(proto.message.Message):
    x = proto.Field(proto.DOUBLE, number=0)
    y = proto.Field(proto.DOUBLE, number=1)
    z = proto.Field(proto.DOUBLE, number=2)
    w = proto.Field(proto.DOUBLE, number=3)