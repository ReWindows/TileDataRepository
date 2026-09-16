#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class MigrateSecondaryTilesFromTDL {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MigrateSecondaryTilesFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MigrateSecondaryTilesFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~MigrateSecondaryTilesFromTDL();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MigrateSecondaryTilesFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MigrateSecondaryTilesFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
