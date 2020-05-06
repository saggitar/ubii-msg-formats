# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Object2D(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsObject2D(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Object2D()
        x.Init(buf, n + offset)
        return x

    # Object2D
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Object2D
    def Id(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

    # Object2D
    def Name(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

    # Object2D
    def Pose(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            x = self._tab.Indirect(o + self._tab.Pos)
            from ubii.dataStructures.Pose2D import Pose2D
            obj = Pose2D()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # Object2D
    def Size(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            x = o + self._tab.Pos
            from ubii.dataStructures.Vector2 import Vector2
            obj = Vector2()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # Object2D
    def UserDataJson(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

def Object2DStart(builder): builder.StartObject(5)
def Object2DAddId(builder, id): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(id), 0)
def Object2DAddName(builder, name): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(name), 0)
def Object2DAddPose(builder, pose): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(pose), 0)
def Object2DAddSize(builder, size): builder.PrependStructSlot(3, flatbuffers.number_types.UOffsetTFlags.py_type(size), 0)
def Object2DAddUserDataJson(builder, userDataJson): builder.PrependUOffsetTRelativeSlot(4, flatbuffers.number_types.UOffsetTFlags.py_type(userDataJson), 0)
def Object2DEnd(builder): return builder.EndObject()

import ubii.dataStructures.Pose2D
import ubii.dataStructures.Vector2
try:
    from typing import Optional
except:
    pass

class Object2DT(object):

    # Object2DT
    def __init__(self):
        self.id = None  # type: str
        self.name = None  # type: str
        self.pose = None  # type: Optional[ubii.dataStructures.Pose2D.Pose2DT]
        self.size = None  # type: Optional[ubii.dataStructures.Vector2.Vector2T]
        self.userDataJson = None  # type: str

    @classmethod
    def InitFromBuf(cls, buf, pos):
        object2D = Object2D()
        object2D.Init(buf, pos)
        return cls.InitFromObj(object2D)

    @classmethod
    def InitFromObj(cls, object2D):
        x = Object2DT()
        x._UnPack(object2D)
        return x

    # Object2DT
    def _UnPack(self, object2D):
        if object2D is None:
            return
        self.id = object2D.Id()
        self.name = object2D.Name()
        if object2D.Pose() is not None:
            self.pose = ubii.dataStructures.Pose2D.Pose2DT.InitFromObj(object2D.Pose())
        if object2D.Size() is not None:
            self.size = ubii.dataStructures.Vector2.Vector2T.InitFromObj(object2D.Size())
        self.userDataJson = object2D.UserDataJson()

    # Object2DT
    def Pack(self, builder):
        if self.id is not None:
            id = builder.CreateString(self.id)
        if self.name is not None:
            name = builder.CreateString(self.name)
        if self.pose is not None:
            pose = self.pose.Pack(builder)
        if self.userDataJson is not None:
            userDataJson = builder.CreateString(self.userDataJson)
        Object2DStart(builder)
        if self.id is not None:
            Object2DAddId(builder, id)
        if self.name is not None:
            Object2DAddName(builder, name)
        if self.pose is not None:
            Object2DAddPose(builder, pose)
        if self.size is not None:
            size = self.size.Pack(builder)
            Object2DAddSize(builder, size)
        if self.userDataJson is not None:
            Object2DAddUserDataJson(builder, userDataJson)
        object2D = Object2DEnd(builder)
        return object2D