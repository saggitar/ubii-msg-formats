# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Matrix3x2(object):
    __slots__ = ['_tab']

    # Matrix3x2
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Matrix3x2
    def M00(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # Matrix3x2
    def M01(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # Matrix3x2
    def M10(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(8))
    # Matrix3x2
    def M11(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(12))
    # Matrix3x2
    def M20(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(16))
    # Matrix3x2
    def M21(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(20))

def CreateMatrix3x2(builder, m00, m01, m10, m11, m20, m21):
    builder.Prep(4, 24)
    builder.PrependFloat32(m21)
    builder.PrependFloat32(m20)
    builder.PrependFloat32(m11)
    builder.PrependFloat32(m10)
    builder.PrependFloat32(m01)
    builder.PrependFloat32(m00)
    return builder.Offset()


class Matrix3x2T(object):

    # Matrix3x2T
    def __init__(self):
        self.m00 = 0.0  # type: float
        self.m01 = 0.0  # type: float
        self.m10 = 0.0  # type: float
        self.m11 = 0.0  # type: float
        self.m20 = 0.0  # type: float
        self.m21 = 0.0  # type: float

    @classmethod
    def InitFromBuf(cls, buf, pos):
        matrix3x2 = Matrix3x2()
        matrix3x2.Init(buf, pos)
        return cls.InitFromObj(matrix3x2)

    @classmethod
    def InitFromObj(cls, matrix3x2):
        x = Matrix3x2T()
        x._UnPack(matrix3x2)
        return x

    # Matrix3x2T
    def _UnPack(self, matrix3x2):
        if matrix3x2 is None:
            return
        self.m00 = matrix3x2.M00()
        self.m01 = matrix3x2.M01()
        self.m10 = matrix3x2.M10()
        self.m11 = matrix3x2.M11()
        self.m20 = matrix3x2.M20()
        self.m21 = matrix3x2.M21()

    # Matrix3x2T
    def Pack(self, builder):
        return CreateMatrix3x2(builder, self.m00, self.m01, self.m10, self.m11, self.m20, self.m21)