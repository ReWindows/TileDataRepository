#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class SecondaryTileExists {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SecondaryTileExists@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXAEAVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    void StartActivity(::Microsoft::WRL::Wrappers::HString &, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SecondaryTileExists@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileExists@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~SecondaryTileExists();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SecondaryTileExists@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SecondaryTileExists@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
