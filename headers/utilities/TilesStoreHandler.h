#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 31 member(s).
namespace Windows::Internal::Tiles {
class TilesStoreHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimaryTilesForPackage@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJPEBVIPackageInfo@Deployment@Common@@@Z
    virtual long AddPrimaryTilesForPackage(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TilesStoreHandler@Tiles@Internal@Windows@@SAJAEAVDatabase@StateRepository@@PEAXPEBG_NPEAPEAVITilesStoreHandler@234@@Z
    static long CreateInstance(WindissectOpaque &, void *, unsigned short const *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTilesForAllRegisteredPackages@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJ_N@Z
    virtual long CreateTilesForAllRegisteredPackages(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTilesForAllRegisteredPackagesForUser@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJ_J_N@Z
    virtual long CreateTilesForAllRegisteredPackagesForUser(int64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrationDone@TilesStoreHandler@Tiles@Internal@Windows@@UEAAXXZ
    virtual void MigrationDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReIndexTilesForPackage@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJAEBVIPackageInfo@Deployment@Common@@AEBV?$GenericMap@PEBGPEA_J@7@@Z
    virtual long ReIndexTilesForPackage(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPrimaryTilesForUser@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJPEBVIPackageInfo@Deployment@Common@@@Z
    virtual long RegisterPrimaryTilesForUser(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePrimaryTilesForPackage@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJPEBVIPackageInfo@Deployment@Common@@@Z
    virtual long RemovePrimaryTilesForPackage(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePrimaryTilesForUser@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJPEBVIPackageInfo@Deployment@Common@@@Z
    virtual long RemovePrimaryTilesForUser(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryTilesForUser@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJPEBVIPackageInfo@Deployment@Common@@@Z
    virtual long RemoveSecondaryTilesForUser(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTilesForRemovedApplicationsForUser@TilesStoreHandler@Tiles@Internal@Windows@@UEAAJPEBVIPackageInfo@Deployment@Common@@@Z
    virtual long RemoveTilesForRemovedApplicationsForUser(WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TilesStoreHandler@Tiles@Internal@Windows@@UEAA@XZ
    virtual ~TilesStoreHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdatePrimaryTileForUserAndApplication@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJAEBVApplication@Entity@StateRepository@@_J@Z
    long AddOrUpdatePrimaryTileForUserAndApplication(WindissectOpaque const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdatePrimaryTilesForUserAndPackage@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJ_J0@Z
    long AddOrUpdatePrimaryTilesForUserAndPackage(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimaryTileUserRecord@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJAEAVPrimaryTileUser@Entity@StateRepository@@@Z
    long AddPrimaryTileUserRecord(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimaryTilesForPackage@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJ_J_N@Z
    long AddPrimaryTilesForPackage(int64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimaryTileUser@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJAEBVApplication@Entity@StateRepository@@_J@Z
    long CreatePrimaryTileUser(WindissectOpaque const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectAndFixPrimaryTileUserConstraintUniqueErrors@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJAEBVPrimaryTileUser@Entity@StateRepository@@@Z
    long DetectAndFixPrimaryTileUserConstraintUniqueErrors(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileUniqueIdFromTDL@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJAEBVApplication@Entity@StateRepository@@AEAU_GUID@@@Z
    long GetTileUniqueIdFromTDL(WindissectOpaque const &, _GUID &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJPEBG_N@Z
    long Initialize(unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTDLMigration@TilesStoreHandler@Tiles@Internal@Windows@@AEAA_NXZ
    bool IsTDLMigration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateSecondaryTilesFromTDL@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJAEBVApplication@Entity@StateRepository@@_J@Z
    long MigrateSecondaryTilesFromTDL(WindissectOpaque const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePrimaryTileForUserAndApplicationIdentity@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJ_J0@Z
    long RemovePrimaryTileForUserAndApplicationIdentity(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePrimaryTilesForUserAndPackage@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJ_J0@Z
    long RemovePrimaryTilesForUserAndPackage(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryTilesForUserAndApplicationIdentity@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJ_J0@Z
    long RemoveSecondaryTilesForUserAndApplicationIdentity(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryTilesForUserAndPackage@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJ_J0@Z
    long RemoveSecondaryTilesForUserAndPackage(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTilesForRemovedApplicationsForUserAndPackage@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJ_J0@Z
    long RemoveTilesForRemovedApplicationsForUserAndPackage(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryTileUser@TilesStoreHandler@Tiles@Internal@Windows@@AEAAJAEBVApplication@Entity@StateRepository@@AEAVPrimaryTileUser@67@@Z
    long UpdatePrimaryTileUser(WindissectOpaque const &, WindissectOpaque &);
};
} // namespace Windows::Internal::Tiles
