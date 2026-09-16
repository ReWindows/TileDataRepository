#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles::Logging::MigrationHelper {
class CreateTilesForAllRegisteredPackages {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrationNotRequired@CreateTilesForAllRegisteredPackages@MigrationHelper@Logging@Tiles@Internal@Windows@@QEAAXXZ
    void MigrationNotRequired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateTilesForAllRegisteredPackages@MigrationHelper@Logging@Tiles@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateTilesForAllRegisteredPackages@MigrationHelper@Logging@Tiles@Internal@Windows@@QEAA@XZ
    ~CreateTilesForAllRegisteredPackages();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateTilesForAllRegisteredPackages@MigrationHelper@Logging@Tiles@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateTilesForAllRegisteredPackages@MigrationHelper@Logging@Tiles@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Tiles::Logging::MigrationHelper
