#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 5 member(s).
namespace Windows::Internal::Tiles {
class SecondaryTileStoreFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SecondaryTileStoreFactory@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISecondaryTileStore@234@@Z
    virtual long Create(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUser@SecondaryTileStoreFactory@Tiles@Internal@Windows@@UEAAJPEAUIUser@System@4@PEAUHSTRING__@@PEAPEAUISecondaryTileStore@234@@Z
    virtual long CreateForUser(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileStoreFactory@Tiles@Internal@Windows@@QEAA@XZ
    SecondaryTileStoreFactory();
};
} // namespace Windows::Internal::Tiles
