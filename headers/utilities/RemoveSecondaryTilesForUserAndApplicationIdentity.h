#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class RemoveSecondaryTilesForUserAndApplicationIdentity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveSecondaryTilesForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAX_J0@Z
    void StartActivity(int64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveSecondaryTilesForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~RemoveSecondaryTilesForUserAndApplicationIdentity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveSecondaryTilesForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveSecondaryTilesForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
