#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::Tiles {
class Tile {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Tile@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@Tile@Tiles@Internal@Windows@@UEAAJAEAUIPrimaryTileUser@StateRepository@34@@Z
    virtual long CopyFrom(::Windows::Internal::StateRepository::IPrimaryTileUser &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@Tile@Tiles@Internal@Windows@@UEAAJAEAUIPrimaryTileUser@StateRepository@34@@Z
    virtual long CopyTo(::Windows::Internal::StateRepository::IPrimaryTileUser &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Tile@Tiles@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Tile@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Tile@Tiles@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Tile@Tiles@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Tile@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Tile@Tiles@Internal@Windows@@QEAA@XZ
    Tile();
};
} // namespace Windows::Internal::Tiles
