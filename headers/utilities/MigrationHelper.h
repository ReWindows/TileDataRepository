#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::Tiles {
class MigrationHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MigrationHelper@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTilesForAllRegisteredPackages@MigrationHelper@Tiles@Internal@Windows@@UEAAJEE@Z
    virtual long CreateTilesForAllRegisteredPackages(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTilesForAllRegisteredPackagesForUser@MigrationHelper@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long CreateTilesForAllRegisteredPackagesForUser(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MigrationHelper@Tiles@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MigrationHelper@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MigrationHelper@Tiles@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MigrationHelper@Tiles@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@MigrationHelper@Tiles@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MigrationHelper@Tiles@Internal@Windows@@QEAA@XZ
    MigrationHelper();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MigrationHelper@Tiles@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MigrationHelper@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MigrationHelper@Tiles@Internal@Windows@@QEAAJPEAXPEAUHSTRING__@@1@Z
    long RuntimeClassInitialize(void *, HSTRING__*, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MigrationHelper@Tiles@Internal@Windows@@UEAA@XZ
    virtual ~MigrationHelper();
};
} // namespace Windows::Internal::Tiles
