#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class RemovePrimaryTileForUserAndApplicationIdentity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemovePrimaryTileForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAX_J0@Z
    void StartActivity(int64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemovePrimaryTileForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~RemovePrimaryTileForUserAndApplicationIdentity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemovePrimaryTileForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemovePrimaryTileForUserAndApplicationIdentity@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
