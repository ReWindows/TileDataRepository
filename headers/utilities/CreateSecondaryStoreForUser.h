#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::SecondaryTileStore {
class CreateSecondaryStoreForUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateSecondaryStoreForUser@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateSecondaryStoreForUser@SecondaryTileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~CreateSecondaryStoreForUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateSecondaryStoreForUser@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateSecondaryStoreForUser@SecondaryTileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::SecondaryTileStore
