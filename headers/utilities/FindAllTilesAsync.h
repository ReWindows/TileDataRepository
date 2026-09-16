#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStore {
class FindAllTilesAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindAllTilesAsync@TileStore@Logging@Tiles@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindAllTilesAsync@TileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~FindAllTilesAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindAllTilesAsync@TileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindAllTilesAsync@TileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStore
