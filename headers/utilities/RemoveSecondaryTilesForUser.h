#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class RemoveSecondaryTilesForUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveSecondaryTilesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG_J0@Z
    void StartActivity(unsigned short const *, int64_t, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveSecondaryTilesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~RemoveSecondaryTilesForUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveSecondaryTilesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveSecondaryTilesForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
