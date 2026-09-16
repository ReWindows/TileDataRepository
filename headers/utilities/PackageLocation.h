#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 3 member(s).
namespace StateRepository::Entity {
class PackageLocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetByPackage(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageLocation@Entity@StateRepository@@QEAA@XZ
    ~PackageLocation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageLocation@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
