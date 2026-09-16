#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 19 member(s).
namespace Windows::Internal::Tiles {
class TileBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateRepoId@TileBase@Tiles@Internal@Windows@@UEAA_JXZ
    virtual int64_t GetStateRepoId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TileBase@Tiles@Internal@Windows@@QEAAJPEAUITileView@StateRepository@34@@Z
    long Initialize(::Windows::Internal::StateRepository::ITileView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TileBase@Tiles@Internal@Windows@@QEAAJPEAUISecondaryTileView@StateRepository@34@@Z
    long Initialize(::Windows::Internal::StateRepository::ISecondaryTileView *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileBase@Tiles@Internal@Windows@@QEAA@XZ
    TileBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppSpecifiedId@TileBase@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppSpecifiedId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@TileBase@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capabilities@TileBase@Tiles@Internal@Windows@@UEAAJPEAW4TileCapabilities@234@@Z
    virtual long get_Capabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@TileBase@Tiles@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@TileBase@Tiles@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RevisionNumber@TileBase@Tiles@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_RevisionNumber(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateType@TileBase@Tiles@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_TemplateType(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@TileBase@Tiles@Internal@Windows@@UEAAJPEAW4TileTypes@234@@Z
    virtual long get_Type(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WritableCapabilities@TileBase@Tiles@Internal@Windows@@UEAAJPEAW4TileCapabilities@234@@Z
    virtual long get_WritableCapabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WritableProperties@TileBase@Tiles@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_WritableProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WritableCapabilities@TileBase@Tiles@Internal@Windows@@UEAAJW4TileCapabilities@234@@Z
    virtual long put_WritableCapabilities(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WritableProperties@TileBase@Tiles@Internal@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long put_WritableProperties(WindissectOpaque *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileBase@Tiles@Internal@Windows@@MEAA@XZ
    virtual ~TileBase();
};
} // namespace Windows::Internal::Tiles
