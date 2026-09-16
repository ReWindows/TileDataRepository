#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace TileDataLayer::Migration {
class Statics {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMigrationDoneForUser@Statics@Migration@TileDataLayer@@YA_NPEAUHKEY__@@QEBG@Z
    bool IsMigrationDoneForUser(HKEY__*, unsigned short const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMigrationDoneForUser@Statics@Migration@TileDataLayer@@YA_NPEBGQEBG@Z
    bool IsMigrationDoneForUser(unsigned short const *, unsigned short const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMigrationRequired@Statics@Migration@TileDataLayer@@YA_NXZ
    bool IsMigrationRequired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrationDone@Statics@Migration@TileDataLayer@@YAJPEAUHKEY__@@QEBG@Z
    long MigrationDone(HKEY__*, unsigned short const * const);
};
} // namespace TileDataLayer::Migration
