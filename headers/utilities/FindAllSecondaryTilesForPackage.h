#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class FindAllSecondaryTilesForPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindAllSecondaryTilesForPackage@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXPEAUHSTRING__@@@Z
    void StartActivity(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindAllSecondaryTilesForPackage@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~FindAllSecondaryTilesForPackage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindAllSecondaryTilesForPackage@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindAllSecondaryTilesForPackage@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
