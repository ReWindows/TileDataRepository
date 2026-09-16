#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStore {
class FindAllTileNotificationsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindAllTileNotificationsAsync@TileStore@Logging@Tiles@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindAllTileNotificationsAsync@TileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~FindAllTileNotificationsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindAllTileNotificationsAsync@TileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindAllTileNotificationsAsync@TileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStore
