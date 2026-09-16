#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class RemovePrimaryTilesForPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemovePrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemovePrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~RemovePrimaryTilesForPackage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemovePrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemovePrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
