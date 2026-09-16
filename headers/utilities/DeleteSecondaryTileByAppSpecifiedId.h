#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class DeleteSecondaryTileByAppSpecifiedId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteSecondaryTileByAppSpecifiedId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXAEAVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    void StartActivity(::Microsoft::WRL::Wrappers::HString &, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteSecondaryTileByAppSpecifiedId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~DeleteSecondaryTileByAppSpecifiedId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteSecondaryTileByAppSpecifiedId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteSecondaryTileByAppSpecifiedId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
