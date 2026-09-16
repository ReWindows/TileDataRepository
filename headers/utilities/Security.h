#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class Security {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultAccountSid@Security@StateRepository@@YAJPEAXK@Z
    long CreateDefaultAccountSid(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SidToString@Security@StateRepository@@YAJPEAXAEAVText@2@@Z
    long SidToString(void *, WindissectOpaque &);
};
} // namespace StateRepository
