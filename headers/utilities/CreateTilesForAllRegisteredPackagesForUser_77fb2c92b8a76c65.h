#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles::Logging::MigrationHelper {
class CreateTilesForAllRegisteredPackagesForUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateTilesForAllRegisteredPackagesForUser@MigrationHelper@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateTilesForAllRegisteredPackagesForUser@MigrationHelper@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~CreateTilesForAllRegisteredPackagesForUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateTilesForAllRegisteredPackagesForUser@MigrationHelper@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateTilesForAllRegisteredPackagesForUser@MigrationHelper@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::MigrationHelper
