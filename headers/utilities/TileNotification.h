#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::Tiles {
class TileNotification {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileNotification@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileNotification@Tiles@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileNotification@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileNotification@Tiles@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileNotification@Tiles@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileNotification@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileNotification@Tiles@Internal@Windows@@QEAAJPEAUIUser@System@4@PEAUITileView@StateRepository@34@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *, ::Windows::Internal::StateRepository::ITileView *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileNotification@Tiles@Internal@Windows@@QEAA@XZ
    TileNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeType@TileNotification@Tiles@Internal@Windows@@UEAAJPEAW4TileChangeTypes@234@@Z
    virtual long get_ChangeType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@TileNotification@Tiles@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RevisionNumber@TileNotification@Tiles@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_RevisionNumber(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tile@TileNotification@Tiles@Internal@Windows@@UEAAJPEAPEAUITile@234@@Z
    virtual long get_Tile(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@TileNotification@Tiles@Internal@Windows@@UEAAJPEAPEAUIUser@System@4@@Z
    virtual long get_User(::Windows::System::IUser * *);
};
} // namespace Windows::Internal::Tiles
