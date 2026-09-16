#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 2 member(s).
namespace StateRepository::DataType {
class Temporal {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNow@Temporal@DataType@StateRepository@@YA_KXZ
    uint64_t GetNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToSystemTimeAndMicroseconds@Temporal@DataType@StateRepository@@YA?AU_SYSTEMTIME@@_KAEA_K@Z
    _SYSTEMTIME ToSystemTimeAndMicroseconds(uint64_t, uint64_t &);
};
} // namespace StateRepository::DataType
