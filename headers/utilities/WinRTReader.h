#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace StateRepository::DictionarySerialization {
class WinRTReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@WinRTReader@DictionarySerialization@StateRepository@@QEAAJ_KPEBXPEAPEAUIInspectable@@PEA_K@Z
    long Deserialize(uint64_t, void const *, IInspectable * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeAsPropertySet@WinRTReader@DictionarySerialization@StateRepository@@QEAAJ_KPEBXPEAPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K@Z
    long DeserializeAsPropertySet(uint64_t, void const *, WindissectOpaque * *, uint64_t *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertyValue@WinRTReader@DictionarySerialization@StateRepository@@AEAAJW4DataType@23@I_KPEBXAEAVRoVariant@@@Z
    long CreatePropertyValue(int, unsigned int, uint64_t, void const *, RoVariant &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePropertyValueStaticsIsAvailable@WinRTReader@DictionarySerialization@StateRepository@@AEAAJXZ
    long EnsurePropertyValueStaticsIsAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPair@WinRTReader@DictionarySerialization@StateRepository@@AEAAJ_KPEBE_KPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEA_K@Z
    long ProcessPair(uint64_t, unsigned char const *, uint64_t, WindissectOpaque *, uint64_t *);
};
} // namespace StateRepository::DictionarySerialization
