#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class FindSecondaryTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXAEAVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    void StartActivity(::Microsoft::WRL::Wrappers::HString &, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~FindSecondaryTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
