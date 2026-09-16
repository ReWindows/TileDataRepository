#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class AddPrimaryTileUserRecord {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddPrimaryTileUserRecord@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAX_J00@Z
    void StartActivity(int64_t, int64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddPrimaryTileUserRecord@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~AddPrimaryTileUserRecord();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddPrimaryTileUserRecord@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddPrimaryTileUserRecord@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
