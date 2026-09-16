#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 7 member(s).
namespace Windows::Internal::Tiles::Logging::TileStoreHandler {
class DetectAndFixPrimaryTileUserConstraintUniqueErrors {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DetectAndFixPrimaryTileUserConstraintUniqueErrors@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAAX_JU_GUID@@0@Z
    void StartActivity(int64_t, _GUID, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DetectAndFixPrimaryTileUserConstraintUniqueErrors@TileStoreHandler@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~DetectAndFixPrimaryTileUserConstraintUniqueErrors();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DetectAndFixPrimaryTileUserConstraintUniqueErrors@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DetectAndFixPrimaryTileUserConstraintUniqueErrors@TileStoreHandler@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::TileStoreHandler
