#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class Tiles {
public:
    class AppxTilesHandler;
    class AppxVisualElementsParser;
    class ITilesHandler;
    class MigrationHelper;
    class MigrationHelperFactory;
    class SecondaryTile;
    class SecondaryTileStore;
    class SecondaryTileStoreFactory;
    class StateRepositoryUtils;
    class TdlMigrationHelper;
    class Tile;
    class TileBase;
    class TileNotification;
    class TileQueryFilter;
    class TileStore;
    class TileStoreChangedEventArgs;
    class TileStoreFactory;
    class TileStorePackageInfo;
    class TilesStoreHandler;
    class XmlQueryHelper;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTile@Tiles@Internal@Windows@@YAJPEAUITileView@StateRepository@23@PEAPEAUITile@123@@Z
    long CreateTile(::Windows::Internal::StateRepository::ITileView *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktop@Tiles@Internal@Windows@@YA_NXZ
    bool IsDesktop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoloLens@Tiles@Internal@Windows@@YA_NXZ
    bool IsHoloLens();
};
} // namespace Windows::Internal
