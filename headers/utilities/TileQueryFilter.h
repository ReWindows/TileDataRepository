#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::Tiles {
class TileQueryFilter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileQueryFilter@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TileQueryFilter@Tiles@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TileQueryFilter@Tiles@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileQueryFilter@Tiles@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileQueryFilter@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileQueryFilter@Tiles@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileQueryFilter@Tiles@Internal@Windows@@QEAA@XZ
    TileQueryFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationSpecifiedId@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationSpecifiedId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capabilities@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAW4TileCapabilities@234@@Z
    virtual long get_Capabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Ids@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAPEAU?$IVector@U_GUID@@@Collections@Foundation@4@@Z
    virtual long get_Ids(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Types@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAPEAU?$IVector@W4TileTypes@Tiles@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long get_Types(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppUserModelId@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_AppUserModelId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationSpecifiedId@TileQueryFilter@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ApplicationSpecifiedId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Capabilities@TileQueryFilter@Tiles@Internal@Windows@@UEAAJW4TileCapabilities@234@@Z
    virtual long put_Capabilities(int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileQueryFilter@Tiles@Internal@Windows@@EEAA@XZ
    virtual ~TileQueryFilter();
};
} // namespace Windows::Internal::Tiles
