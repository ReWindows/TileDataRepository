#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles {
class TileStoreFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TileStoreFactory@Tiles@Internal@Windows@@UEAAJPEAUIUser@System@4@PEAPEAUITileStore@234@@Z
    virtual long Create(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileStoreFactory@Tiles@Internal@Windows@@QEAA@XZ
    TileStoreFactory();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStoreFactory@Tiles@Internal@Windows@@EEAA@XZ
    virtual ~TileStoreFactory();
};
} // namespace Windows::Internal::Tiles
