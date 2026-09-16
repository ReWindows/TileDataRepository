#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 44 member(s).
namespace Windows::Internal::Tiles {
class SecondaryTile {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecondaryTile@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@SecondaryTile@Tiles@Internal@Windows@@UEAAJAEAUISecondaryTileView@StateRepository@34@@Z
    virtual long CopyFrom(::Windows::Internal::StateRepository::ISecondaryTileView &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@SecondaryTile@Tiles@Internal@Windows@@UEAAJAEAUISecondaryTileView@StateRepository@34@@Z
    virtual long CopyTo(::Windows::Internal::StateRepository::ISecondaryTileView &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SecondaryTile@Tiles@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SecondaryTile@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SecondaryTile@Tiles@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SecondaryTile@Tiles@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SecondaryTile@Tiles@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecondaryTile@Tiles@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecondaryTile@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SecondaryTile@Tiles@Internal@Windows@@QEAAJPEAUISecondaryTileView@StateRepository@34@@Z
    long RuntimeClassInitialize(::Windows::Internal::StateRepository::ISecondaryTileView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SecondaryTile@Tiles@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTile@Tiles@Internal@Windows@@QEAA@XZ
    SecondaryTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@SecondaryTile@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppSpecifiedId@SecondaryTile@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_AppSpecifiedId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Arguments@SecondaryTile@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Arguments(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TemplateType@SecondaryTile@Tiles@Internal@Windows@@UEAAJI@Z
    virtual long put_TemplateType(unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTile@Tiles@Internal@Windows@@EEAA@XZ
    virtual ~SecondaryTile();
};
} // namespace Windows::Internal::Tiles
