#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles {
class MigrationHelperFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MigrationHelperFactory@Tiles@Internal@Windows@@UEAAJPEAUIUser@System@4@PEAPEAUIMigrationHelper@234@@Z
    virtual long Create(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUserSid@MigrationHelperFactory@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIMigrationHelper@234@@Z
    virtual long CreateForUserSid(HSTRING__*, HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Internal::Tiles
