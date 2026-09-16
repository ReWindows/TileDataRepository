#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class AddPrimaryTilesForPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddPrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddPrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~AddPrimaryTilesForPackage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddPrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddPrimaryTilesForPackage@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
