#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace StateRepository::Entity {
class Package {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@Package@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Package@Entity@StateRepository@@QEAA@XZ
    Package();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPrimaryKey@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetByPrimaryKey(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Package@Entity@StateRepository@@QEAA@XZ
    ~Package();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Package@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
