# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Image2D(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsImage2D(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Image2D()
        x.Init(buf, n + offset)
        return x

    # Image2D
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Image2D
    def Width(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # Image2D
    def Height(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # Image2D
    def DataFormat(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # Image2D
    def Data(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Int8Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 1))
        return 0

    # Image2D
    def DataAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Int8Flags, o)
        return 0

    # Image2D
    def DataLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Image2D
    def DataIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        return o == 0

def Image2DStart(builder): builder.StartObject(4)
def Image2DAddWidth(builder, width): builder.PrependInt32Slot(0, width, 0)
def Image2DAddHeight(builder, height): builder.PrependInt32Slot(1, height, 0)
def Image2DAddDataFormat(builder, dataFormat): builder.PrependInt8Slot(2, dataFormat, 0)
def Image2DAddData(builder, data): builder.PrependUOffsetTRelativeSlot(3, flatbuffers.number_types.UOffsetTFlags.py_type(data), 0)
def Image2DStartDataVector(builder, numElems): return builder.StartVector(1, numElems, 1)
def Image2DEnd(builder): return builder.EndObject()

try:
    from typing import List
except:
    pass

class Image2DT(object):

    # Image2DT
    def __init__(self):
        self.width = 0  # type: int
        self.height = 0  # type: int
        self.dataFormat = 0  # type: int
        self.data = None  # type: List[int]

    @classmethod
    def InitFromBuf(cls, buf, pos):
        image2D = Image2D()
        image2D.Init(buf, pos)
        return cls.InitFromObj(image2D)

    @classmethod
    def InitFromObj(cls, image2D):
        x = Image2DT()
        x._UnPack(image2D)
        return x

    # Image2DT
    def _UnPack(self, image2D):
        if image2D is None:
            return
        self.width = image2D.Width()
        self.height = image2D.Height()
        self.dataFormat = image2D.DataFormat()
        if not image2D.DataIsNone():
            if np is None:
                self.data = []
                for i in range(image2D.DataLength()):
                    self.data.append(image2D.Data(i))
            else:
                self.data = image2D.DataAsNumpy()

    # Image2DT
    def Pack(self, builder):
        if self.data is not None:
            if np is not None and type(self.data) is np.ndarray:
                data = builder.CreateNumpyVector(self.data)
            else:
                Image2DStartDataVector(builder, len(self.data))
                for i in reversed(range(len(self.data))):
                    builder.PrependByte(self.data[i])
                data = builder.EndVector(len(self.data))
        Image2DStart(builder)
        Image2DAddWidth(builder, self.width)
        Image2DAddHeight(builder, self.height)
        Image2DAddDataFormat(builder, self.dataFormat)
        if self.data is not None:
            Image2DAddData(builder, data)
        image2D = Image2DEnd(builder)
        return image2D