#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class CreateSecondaryStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateSecondaryStore@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateSecondaryStore@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~CreateSecondaryStore();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateSecondaryStore@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateSecondaryStore@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
