#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::DatabaseCache {
class Clear {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Clear@DatabaseCache@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Clear@DatabaseCache@Logging@StateRepository@@QEAA@XZ
    ~Clear();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Clear@DatabaseCache@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Clear@DatabaseCache@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::DatabaseCache
