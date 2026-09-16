#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class RemoveTilesForRemovedApplicationsForUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveTilesForRemovedApplicationsForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG_J0@Z
    void StartActivity(unsigned short const *, int64_t, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveTilesForRemovedApplicationsForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~RemoveTilesForRemovedApplicationsForUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveTilesForRemovedApplicationsForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveTilesForRemovedApplicationsForUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
