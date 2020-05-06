# automatically generated by the FlatBuffers compiler, do not modify

# namespace: requests

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class TopicSubscription(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsTopicSubscription(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = TopicSubscription()
        x.Init(buf, n + offset)
        return x

    # TopicSubscription
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # TopicSubscription
    def ClientId(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

    # TopicSubscription
    def SubscribeTopics(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.String(a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return ""

    # TopicSubscription
    def SubscribeTopicsLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # TopicSubscription
    def SubscribeTopicsIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        return o == 0

    # TopicSubscription
    def UnsubscribeTopics(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.String(a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return ""

    # TopicSubscription
    def UnsubscribeTopicsLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # TopicSubscription
    def UnsubscribeTopicsIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        return o == 0

    # TopicSubscription
    def SubscribeTopicRegexp(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

    # TopicSubscription
    def UnsubscribeTopicRegexp(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

def TopicSubscriptionStart(builder): builder.StartObject(5)
def TopicSubscriptionAddClientId(builder, clientId): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(clientId), 0)
def TopicSubscriptionAddSubscribeTopics(builder, subscribeTopics): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(subscribeTopics), 0)
def TopicSubscriptionStartSubscribeTopicsVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def TopicSubscriptionAddUnsubscribeTopics(builder, unsubscribeTopics): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(unsubscribeTopics), 0)
def TopicSubscriptionStartUnsubscribeTopicsVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def TopicSubscriptionAddSubscribeTopicRegexp(builder, subscribeTopicRegexp): builder.PrependUOffsetTRelativeSlot(3, flatbuffers.number_types.UOffsetTFlags.py_type(subscribeTopicRegexp), 0)
def TopicSubscriptionAddUnsubscribeTopicRegexp(builder, unsubscribeTopicRegexp): builder.PrependUOffsetTRelativeSlot(4, flatbuffers.number_types.UOffsetTFlags.py_type(unsubscribeTopicRegexp), 0)
def TopicSubscriptionEnd(builder): return builder.EndObject()

try:
    from typing import List
except:
    pass

class TopicSubscriptionT(object):

    # TopicSubscriptionT
    def __init__(self):
        self.clientId = None  # type: str
        self.subscribeTopics = None  # type: List[str]
        self.unsubscribeTopics = None  # type: List[str]
        self.subscribeTopicRegexp = None  # type: str
        self.unsubscribeTopicRegexp = None  # type: str

    @classmethod
    def InitFromBuf(cls, buf, pos):
        topicSubscription = TopicSubscription()
        topicSubscription.Init(buf, pos)
        return cls.InitFromObj(topicSubscription)

    @classmethod
    def InitFromObj(cls, topicSubscription):
        x = TopicSubscriptionT()
        x._UnPack(topicSubscription)
        return x

    # TopicSubscriptionT
    def _UnPack(self, topicSubscription):
        if topicSubscription is None:
            return
        self.clientId = topicSubscription.ClientId()
        if not topicSubscription.SubscribeTopicsIsNone():
            self.subscribeTopics = []
            for i in range(topicSubscription.SubscribeTopicsLength()):
                self.subscribeTopics.append(topicSubscription.SubscribeTopics(i))
        if not topicSubscription.UnsubscribeTopicsIsNone():
            self.unsubscribeTopics = []
            for i in range(topicSubscription.UnsubscribeTopicsLength()):
                self.unsubscribeTopics.append(topicSubscription.UnsubscribeTopics(i))
        self.subscribeTopicRegexp = topicSubscription.SubscribeTopicRegexp()
        self.unsubscribeTopicRegexp = topicSubscription.UnsubscribeTopicRegexp()

    # TopicSubscriptionT
    def Pack(self, builder):
        if self.clientId is not None:
            clientId = builder.CreateString(self.clientId)
        if self.subscribeTopics is not None:
            subscribeTopicslist = []
            for i in range(len(self.subscribeTopics)):
                subscribeTopicslist.append(builder.CreateString(self.subscribeTopics[i]))
            TopicSubscriptionStartSubscribeTopicsVector(builder, len(self.subscribeTopics))
            for i in reversed(range(len(self.subscribeTopics))):
                builder.PrependUOffsetTRelative(subscribeTopicslist[i])
            subscribeTopics = builder.EndVector(len(self.subscribeTopics))
        if self.unsubscribeTopics is not None:
            unsubscribeTopicslist = []
            for i in range(len(self.unsubscribeTopics)):
                unsubscribeTopicslist.append(builder.CreateString(self.unsubscribeTopics[i]))
            TopicSubscriptionStartUnsubscribeTopicsVector(builder, len(self.unsubscribeTopics))
            for i in reversed(range(len(self.unsubscribeTopics))):
                builder.PrependUOffsetTRelative(unsubscribeTopicslist[i])
            unsubscribeTopics = builder.EndVector(len(self.unsubscribeTopics))
        if self.subscribeTopicRegexp is not None:
            subscribeTopicRegexp = builder.CreateString(self.subscribeTopicRegexp)
        if self.unsubscribeTopicRegexp is not None:
            unsubscribeTopicRegexp = builder.CreateString(self.unsubscribeTopicRegexp)
        TopicSubscriptionStart(builder)
        if self.clientId is not None:
            TopicSubscriptionAddClientId(builder, clientId)
        if self.subscribeTopics is not None:
            TopicSubscriptionAddSubscribeTopics(builder, subscribeTopics)
        if self.unsubscribeTopics is not None:
            TopicSubscriptionAddUnsubscribeTopics(builder, unsubscribeTopics)
        if self.subscribeTopicRegexp is not None:
            TopicSubscriptionAddSubscribeTopicRegexp(builder, subscribeTopicRegexp)
        if self.unsubscribeTopicRegexp is not None:
            TopicSubscriptionAddUnsubscribeTopicRegexp(builder, unsubscribeTopicRegexp)
        topicSubscription = TopicSubscriptionEnd(builder)
        return topicSubscription