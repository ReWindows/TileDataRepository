#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::Tiles {
class SecondaryTileStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecondaryTileStore@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAUISecondaryTile@234@@Z
    virtual long Create(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAUISecondaryTile@234@@Z
    virtual long Delete(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByAppSpecifiedId@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteByAppSpecifiedId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteById@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long DeleteById(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long Exists(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISecondaryTile@234@@Z
    virtual long Find(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAll@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSecondaryTile@Tiles@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAll(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllForPackage@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVSecondaryTile@Tiles@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAllForPackage(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SecondaryTileStore@Tiles@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SecondaryTileStore@Tiles@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecondaryTileStore@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SecondaryTileStore@Tiles@Internal@Windows@@QEAAJPEAUIUser@System@4@PEAU5StateRepository@34@PEAUIApplication@734@PEAUISecondaryTileViewStatics@734@PEAUIPackageStatics@734@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *, ::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::ISecondaryTileViewStatics *, ::Windows::Internal::StateRepository::IPackageStatics *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileStore@Tiles@Internal@Windows@@QEAA@XZ
    SecondaryTileStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@SecondaryTileStore@Tiles@Internal@Windows@@UEAAJPEAUISecondaryTile@234@@Z
    virtual long Update(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateSecondaryTileVector@SecondaryTileStore@Tiles@Internal@Windows@@AEAAJPEAU?$IVectorView@PEAVSecondaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@PEAV?$AgileVector@PEAVSecondaryTile@Tiles@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVSecondaryTile@Tiles@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVSecondaryTile@Tiles@Internal@Windows@@@3674@$0A@@3674@@Z
    long PopulateSecondaryTileVector(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileStore@Tiles@Internal@Windows@@EEAA@XZ
    virtual ~SecondaryTileStore();
};
} // namespace Windows::Internal::Tiles
