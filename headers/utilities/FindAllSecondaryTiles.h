#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class FindAllSecondaryTiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindAllSecondaryTiles@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXAEAVHString@Wrappers@WRL@Microsoft@@@Z
    void StartActivity(::Microsoft::WRL::Wrappers::HString &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindAllSecondaryTiles@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~FindAllSecondaryTiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindAllSecondaryTiles@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindAllSecondaryTiles@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
