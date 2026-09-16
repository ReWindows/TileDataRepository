#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Entity {
class User {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAV123@@Z
    static long GetByUserSid(WindissectOpaque &, void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@User@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAV123@AEA_N@Z
    static long TryGetByUserSid(WindissectOpaque &, void *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1User@Entity@StateRepository@@QEAA@XZ
    ~User();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@User@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
