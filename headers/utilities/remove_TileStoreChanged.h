#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles::Logging::TileStore {
class remove_TileStoreChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@remove_TileStoreChanged@TileStore@Logging@Tiles@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1remove_TileStoreChanged@TileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~remove_TileStoreChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@remove_TileStoreChanged@TileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@remove_TileStoreChanged@TileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStore
