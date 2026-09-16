#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 8 member(s).
namespace Windows::Internal::Tiles::Logging::TdlMigrationHelper {
class MigrateSecondaryTilesFromTdl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DontMigrateSecondaryTiles@MigrateSecondaryTilesFromTdl@TdlMigrationHelper@Logging@Tiles@Internal@Windows@@QEAAXXZ
    void DontMigrateSecondaryTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MigrateSecondaryTilesFromTdl@TdlMigrationHelper@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MigrateSecondaryTilesFromTdl@TdlMigrationHelper@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~MigrateSecondaryTilesFromTdl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MigrateSecondaryTilesFromTdl@TdlMigrationHelper@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MigrateSecondaryTilesFromTdl@TdlMigrationHelper@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TdlMigrationHelper
