"""
@generated by mypy-protobuf.  Do not edit manually!
isort:skip_file
"""
import proto
import proto.message

class Matrix4x4(proto.message.Message):
    m00 = proto.Field(proto.DOUBLE, number=0)
    m01 = proto.Field(proto.DOUBLE, number=1)
    m02 = proto.Field(proto.DOUBLE, number=2)
    m03 = proto.Field(proto.DOUBLE, number=3)
    m10 = proto.Field(proto.DOUBLE, number=4)
    m11 = proto.Field(proto.DOUBLE, number=5)
    m12 = proto.Field(proto.DOUBLE, number=6)
    m13 = proto.Field(proto.DOUBLE, number=7)
    m20 = proto.Field(proto.DOUBLE, number=8)
    m21 = proto.Field(proto.DOUBLE, number=9)
    m22 = proto.Field(proto.DOUBLE, number=10)
    m23 = proto.Field(proto.DOUBLE, number=11)
    m30 = proto.Field(proto.DOUBLE, number=12)
    m31 = proto.Field(proto.DOUBLE, number=13)
    m32 = proto.Field(proto.DOUBLE, number=14)
    m33 = proto.Field(proto.DOUBLE, number=15)