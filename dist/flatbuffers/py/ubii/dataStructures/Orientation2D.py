# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Orientation2D(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsOrientation2D(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Orientation2D()
        x.Init(buf, n + offset)
        return x

    # Orientation2D
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Orientation2D
    def Angle(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            x = self._tab.Indirect(o + self._tab.Pos)
            from ubii.dataStructures.AngleOrientation import AngleOrientation
            obj = AngleOrientation()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # Orientation2D
    def Direction(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = o + self._tab.Pos
            from ubii.dataStructures.Vector2 import Vector2
            obj = Vector2()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

def Orientation2DStart(builder): builder.StartObject(2)
def Orientation2DAddAngle(builder, angle): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(angle), 0)
def Orientation2DAddDirection(builder, direction): builder.PrependStructSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(direction), 0)
def Orientation2DEnd(builder): return builder.EndObject()

import ubii.dataStructures.AngleOrientation
import ubii.dataStructures.Vector2
try:
    from typing import Optional
except:
    pass

class Orientation2DT(object):

    # Orientation2DT
    def __init__(self):
        self.angle = None  # type: Optional[ubii.dataStructures.AngleOrientation.AngleOrientationT]
        self.direction = None  # type: Optional[ubii.dataStructures.Vector2.Vector2T]

    @classmethod
    def InitFromBuf(cls, buf, pos):
        orientation2D = Orientation2D()
        orientation2D.Init(buf, pos)
        return cls.InitFromObj(orientation2D)

    @classmethod
    def InitFromObj(cls, orientation2D):
        x = Orientation2DT()
        x._UnPack(orientation2D)
        return x

    # Orientation2DT
    def _UnPack(self, orientation2D):
        if orientation2D is None:
            return
        if orientation2D.Angle() is not None:
            self.angle = ubii.dataStructures.AngleOrientation.AngleOrientationT.InitFromObj(orientation2D.Angle())
        if orientation2D.Direction() is not None:
            self.direction = ubii.dataStructures.Vector2.Vector2T.InitFromObj(orientation2D.Direction())

    # Orientation2DT
    def Pack(self, builder):
        if self.angle is not None:
            angle = self.angle.Pack(builder)
        Orientation2DStart(builder)
        if self.angle is not None:
            Orientation2DAddAngle(builder, angle)
        if self.direction is not None:
            direction = self.direction.Pack(builder)
            Orientation2DAddDirection(builder, direction)
        orientation2D = Orientation2DEnd(builder)
        return orientation2D