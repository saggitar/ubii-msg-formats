"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class Quaternion(proto.message.Message):
    x = proto.Field(proto.DOUBLE, number=1)
    y = proto.Field(proto.DOUBLE, number=2)
    z = proto.Field(proto.DOUBLE, number=3)
    w = proto.Field(proto.DOUBLE, number=4)
