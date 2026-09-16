#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class DeleteSecondaryTileByTileUniqueId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteSecondaryTileByTileUniqueId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXAEAVHString@Wrappers@WRL@Microsoft@@AEAU_GUID@@@Z
    void StartActivity(::Microsoft::WRL::Wrappers::HString &, _GUID &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteSecondaryTileByTileUniqueId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~DeleteSecondaryTileByTileUniqueId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteSecondaryTileByTileUniqueId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteSecondaryTileByTileUniqueId@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
