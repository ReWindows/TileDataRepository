#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 7 member(s).
namespace StateRepository::Entity {
class ApplicationIdentity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyOfPackageAndNotPackageUser@ApplicationIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyOfPackageAndNotPackageUser(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@ApplicationIdentity@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryKeyByApplicationUserModelId@ApplicationIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGPEA_J@Z
    static long GetPrimaryKeyByApplicationUserModelId(WindissectOpaque &, unsigned short const *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationUserModelId@ApplicationIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByApplicationUserModelId(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPrimaryKeyByApplicationUserModelId@ApplicationIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGPEA_JAEA_N@Z
    static long TryGetPrimaryKeyByApplicationUserModelId(WindissectOpaque &, unsigned short const *, int64_t *, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationIdentity@Entity@StateRepository@@QEAA@XZ
    ~ApplicationIdentity();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@ApplicationIdentity@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
