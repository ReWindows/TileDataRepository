#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Common {
class StringBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendString@StringBuilder@Common@@QEAAJPEBG@Z
    long AppendString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendString@StringBuilder@Common@@QEAAJPEBUCOMMON_STRING@2@@Z
    long AppendString(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@StringBuilder@Common@@QEAAJKK@Z
    long Insert(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChars@StringBuilder@Common@@QEAAJKPEBGK@Z
    long InsertChars(unsigned long, unsigned short const *, unsigned long);
};
} // namespace Common
