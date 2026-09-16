#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Entity {
class SecondaryTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SecondaryTile@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SecondaryTile@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileId@SecondaryTile@Entity@StateRepository@@QEAAJPEBG@Z
    long SetTileId(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTile@Entity@StateRepository@@QEAA@XZ
    ~SecondaryTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@SecondaryTile@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
