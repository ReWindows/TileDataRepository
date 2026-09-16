#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class StatementCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@StatementCache@StateRepository@@QEAAJAEAVStatement@2@@Z
    long Add(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@StatementCache@StateRepository@@QEAAPEAVStatement@2@PEBDAEAV32@@Z
    WindissectOpaque * Get(char const *, WindissectOpaque &);
};
} // namespace StateRepository
