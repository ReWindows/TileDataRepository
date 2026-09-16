#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 3 member(s).
namespace Windows::Internal::Tiles {
class StateRepositoryUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStringValue@StateRepositoryUtils@Tiles@Internal@Windows@@YAJI_KPEBXAEAVHString@Wrappers@WRL@Microsoft@@@Z
    long ReadStringValue(unsigned int, uint64_t, void const *, ::Microsoft::WRL::Wrappers::HString &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBoolean@StateRepositoryUtils@Tiles@Internal@Windows@@YAJI_NAEAVWriter@DictionarySerialization@StateRepository@@@Z
    long WriteBoolean(unsigned int, bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteString@StateRepositoryUtils@Tiles@Internal@Windows@@YAJIPEBGAEAVWriter@DictionarySerialization@StateRepository@@@Z
    long WriteString(unsigned int, unsigned short const *, WindissectOpaque &);
};
} // namespace Windows::Internal::Tiles
