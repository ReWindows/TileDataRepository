#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class CreatePrimaryTileUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreatePrimaryTileUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG_J1@Z
    void StartActivity(unsigned short const *, int64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreatePrimaryTileUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~CreatePrimaryTileUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreatePrimaryTileUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreatePrimaryTileUser@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
