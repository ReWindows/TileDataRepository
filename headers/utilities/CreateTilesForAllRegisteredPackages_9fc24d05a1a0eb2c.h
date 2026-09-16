#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class CreateTilesForAllRegisteredPackages {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateTilesForAllRegisteredPackages@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAX_JPEBG_N@Z
    void StartActivity(int64_t, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateTilesForAllRegisteredPackages@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~CreateTilesForAllRegisteredPackages();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateTilesForAllRegisteredPackages@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateTilesForAllRegisteredPackages@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
