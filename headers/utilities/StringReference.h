#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 2 member(s).
namespace Windows::Internal {
class StringReference {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawBuffer@StringReference@Internal@Windows@@QEBAPEBGPEAI@Z
    unsigned short const * GetRawBuffer(unsigned int *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z
    void _ConstructorHelper(unsigned short const *);
};
} // namespace Windows::Internal
