#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 7 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class GetTileUniqueIdFromTDL {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetTileUniqueIdFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetTileUniqueIdFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~GetTileUniqueIdFromTDL();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetTileUniqueIdFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetTileUniqueIdFromTDL@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
