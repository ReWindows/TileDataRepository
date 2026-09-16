#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles::Logging::TileStore {
class GetCurrentRevisionNumber {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetCurrentRevisionNumber@TileStore@Logging@Tiles@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCurrentRevisionNumber@TileStore@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~GetCurrentRevisionNumber();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetCurrentRevisionNumber@TileStore@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetCurrentRevisionNumber@TileStore@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStore
