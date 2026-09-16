#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 3 member(s).
namespace StateRepository::Entity {
class Sequence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Sequence@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextValue@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4SequenceId@3@AEA_J@Z
    static long GetNextValue(WindissectOpaque &, int, int64_t &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@Sequence@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
