#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace StateRepository {
class Text {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Text@StateRepository@@QEAAJPEBG@Z
    long Append(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Text@StateRepository@@QEAAJPEBG_K@Z
    long Append(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@Text@StateRepository@@QEAAJ_K_N@Z
    long EnsureCapacity(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Text@StateRepository@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@Text@StateRepository@@QEAAJPEBG_K@Z
    long Set(unsigned short const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFromChars@Text@StateRepository@@QEAAJPEBG_K@Z
    long SetFromChars(unsigned short const *, uint64_t);
};
} // namespace StateRepository
