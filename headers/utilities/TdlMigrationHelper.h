#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 10 member(s).
namespace Windows::Internal::Tiles {
class TdlMigrationHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileUniqueId@TdlMigrationHelper@Tiles@Internal@Windows@@QEAAJPEBG0AEAU_GUID@@@Z
    long GetTileUniqueId(unsigned short const *, unsigned short const *, _GUID &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TdlMigrationHelper@Tiles@Internal@Windows@@QEAAJPEAXPEBG_N@Z
    long Initialize(void *, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMigrationDone@TdlMigrationHelper@Tiles@Internal@Windows@@QEAA_NXZ
    bool IsMigrationDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateSecondaryTilesFromTdl@TdlMigrationHelper@Tiles@Internal@Windows@@QEAAJAEAVDatabase@StateRepository@@AEBVApplication@Entity@6@_J@Z
    long MigrateSecondaryTilesFromTdl(WindissectOpaque &, WindissectOpaque const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrationDone@TdlMigrationHelper@Tiles@Internal@Windows@@QEAAXXZ
    void MigrationDone();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TdlMigrationHelper@Tiles@Internal@Windows@@QEAA@XZ
    ~TdlMigrationHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTdlMigrator@TdlMigrationHelper@Tiles@Internal@Windows@@AEAAJXZ
    long CreateTdlMigrator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateBooleanProperties@TdlMigrationHelper@Tiles@Internal@Windows@@CAJAEAV?$ComPtr@UITileInfo@@@WRL@Microsoft@@AEAVWriter@DictionarySerialization@StateRepository@@@Z
    static long MigrateBooleanProperties(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateStringProperties@TdlMigrationHelper@Tiles@Internal@Windows@@CAJAEAV?$ComPtr@UITileInfo@@@WRL@Microsoft@@AEAVWriter@DictionarySerialization@StateRepository@@@Z
    static long MigrateStringProperties(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateTileProperties@TdlMigrationHelper@Tiles@Internal@Windows@@CAJAEAV?$ComPtr@UITileInfo@@@WRL@Microsoft@@AEAVWriter@DictionarySerialization@StateRepository@@@Z
    static long MigrateTileProperties(WindissectOpaque &, WindissectOpaque &);
};
} // namespace Windows::Internal::Tiles
