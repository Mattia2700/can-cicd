# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class HV_CURRENT(object):
    __slots__ = ['_tab']

    @classmethod
    def SizeOf(cls):
        return 4

    # HV_CURRENT
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # HV_CURRENT
    def Current(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # HV_CURRENT
    def Power(self): return self._tab.Get(flatbuffers.number_types.Int8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(2))

def CreateHV_CURRENT(builder, current, power):
    builder.Prep(2, 4)
    builder.Pad(1)
    builder.PrependInt8(power)
    builder.PrependUint16(current)
    return builder.Offset()