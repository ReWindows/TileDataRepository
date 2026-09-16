#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 8 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class CreateTilesForAllRegisteredPackagesForUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateTilesForAllRegisteredPackagesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAX_J@Z
    void StartActivity(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateTilesForAllRegisteredPackagesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~CreateTilesForAllRegisteredPackagesForUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateTilesForAllRegisteredPackagesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateTilesForAllRegisteredPackagesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
