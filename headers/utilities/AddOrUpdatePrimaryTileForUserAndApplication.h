#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class AddOrUpdatePrimaryTileForUserAndApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddOrUpdatePrimaryTileForUserAndApplication@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAXPEBG_J@Z
    void StartActivity(unsigned short const *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddOrUpdatePrimaryTileForUserAndApplication@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~AddOrUpdatePrimaryTileForUserAndApplication();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddOrUpdatePrimaryTileForUserAndApplication@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddOrUpdatePrimaryTileForUserAndApplication@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
