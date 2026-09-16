#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class UpdateSecondaryTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXAEAVHString@Wrappers@WRL@Microsoft@@PEAUISecondaryTile@456@@Z
    void StartActivity(::Microsoft::WRL::Wrappers::HString &, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~UpdateSecondaryTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateSecondaryTile@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
