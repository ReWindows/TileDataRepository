#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 8 member(s).
namespace StateRepository::Entity {
class Application {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Application@Entity@StateRepository@@QEAA@XZ
    Application();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@Application@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long Get(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullNameAndPackageRelativeApplicationId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEAV123@@Z
    static long GetByPackageFullNameAndPackageRelativeApplicationId(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Application@Entity@StateRepository@@QEAA@XZ
    ~Application();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Application@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
