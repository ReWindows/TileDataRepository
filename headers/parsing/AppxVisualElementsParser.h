#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
namespace Windows::Internal::Tiles {
class AppxVisualElementsParser {
public:
    class PropertyInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseTile@AppxVisualElementsParser@Tiles@Internal@Windows@@QEAAJAEAVPrimaryTile@Entity@StateRepository@@@Z
    long ParseTile(WindissectOpaque &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyShowNameSizes@AppxVisualElementsParser@Tiles@Internal@Windows@@AEAAJPEAK@Z
    long GetLegacyShowNameSizes(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowNameSizes@AppxVisualElementsParser@Tiles@Internal@Windows@@AEAAJPEBGPEAK@Z
    long GetShowNameSizes(unsigned short const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppListVisible@AppxVisualElementsParser@Tiles@Internal@Windows@@AEAA_NAEAVPrimaryTile@Entity@StateRepository@@@Z
    bool IsAppListVisible(WindissectOpaque &);
};
} // namespace Windows::Internal::Tiles
