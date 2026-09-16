#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class WritePrimaryTiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WritePrimaryTiles@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WritePrimaryTiles@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~WritePrimaryTiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WritePrimaryTiles@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WritePrimaryTiles@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
