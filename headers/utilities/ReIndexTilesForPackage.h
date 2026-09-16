#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 7 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class ReIndexTilesForPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ReIndexTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReIndexTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~ReIndexTilesForPackage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ReIndexTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ReIndexTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
