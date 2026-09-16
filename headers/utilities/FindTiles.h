#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStore {
class FindTiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindTiles@TileStore@Logging@Tiles@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindTiles@TileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~FindTiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindTiles@TileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindTiles@TileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStore
