#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 7 member(s).
namespace Windows::Internal::Tiles {
class AppxTilesHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@AppxTilesHandler@Tiles@Internal@Windows@@UEAAAEAV?$Array@VPrimaryTile@Entity@StateRepository@@V?$ContainerOperations@VPrimaryTile@Entity@StateRepository@@V123@@Common@@VNoKey@5@V?$ContainerOperations@VNoKey@Common@@VPrimaryTile@Entity@StateRepository@@@5@V?$ArrayOperations@VPrimaryTile@Entity@StateRepository@@VNoKey@Common@@@5@@Common@@XZ
    virtual WindissectOpaque & GetTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTiles@AppxTilesHandler@Tiles@Internal@Windows@@UEAAJXZ
    virtual long MakeTiles();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppxTilesHandler@Tiles@Internal@Windows@@UEAA@XZ
    virtual ~AppxTilesHandler();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimaryTileFromApplicationNode@AppxTilesHandler@Tiles@Internal@Windows@@IEAAJAEAUIXMLDOMNode@@@Z
    long CreatePrimaryTileFromApplicationNode(IXMLDOMNode &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXMLDocumentFromManifestReader@AppxTilesHandler@Tiles@Internal@Windows@@IEAAJAEAUIAppxManifestReader@@PEAPEAUIXMLDOMDocument@@@Z
    long GetXMLDocumentFromManifestReader(IAppxManifestReader &, IXMLDOMDocument * *);
};
} // namespace Windows::Internal::Tiles
