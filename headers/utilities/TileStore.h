#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 44 member(s).
namespace Windows::Internal::Tiles {
class TileStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileStore@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTileNotifications@TileStore@Tiles@Internal@Windows@@UEAAJ_JPEAUITileQueryFilter@234@PEAPEAU?$IVectorView@PEAVTileNotification@Tiles@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindTileNotifications(int64_t, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTileNotificationsAsync@TileStore@Tiles@Internal@Windows@@UEAAJ_JPEAUITileQueryFilter@234@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileNotification@Tiles@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long FindTileNotificationsAsync(int64_t, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTiles@TileStore@Tiles@Internal@Windows@@UEAAJ_JPEAUITileQueryFilter@234@PEAPEAU?$IVectorView@PEAUITile@Tiles@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindTiles(int64_t, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTilesAsync@TileStore@Tiles@Internal@Windows@@UEAAJ_JPEAUITileQueryFilter@234@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUITile@Tiles@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long FindTilesAsync(int64_t, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationInfoByTileId@TileStore@Tiles@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIAppInfo@ApplicationModel@4@@Z
    virtual long GetApplicationInfoByTileId(_GUID, ::Windows::ApplicationModel::IAppInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationInfoByTileIdAsync@TileStore@Tiles@Internal@Windows@@UEAAJU_GUID@@PEAPEAU?$IAsyncOperation@PEAVAppInfo@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long GetApplicationInfoByTileIdAsync(_GUID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRevisionNumber@TileStore@Tiles@Internal@Windows@@UEAAJPEA_J@Z
    virtual long GetCurrentRevisionNumber(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRevisionNumberAsync@TileStore@Tiles@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_J@Foundation@4@@Z
    virtual long GetCurrentRevisionNumberAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileStore@Tiles@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileStore@Tiles@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileStore@Tiles@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TileStore@Tiles@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TileStore@Tiles@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileStore@Tiles@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileStore@Tiles@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileStore@Tiles@Internal@Windows@@QEAA@XZ
    TileStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryTileUser@TileStore@Tiles@Internal@Windows@@UEAAJPEAUITileWritableInternal@234@@Z
    virtual long UpdatePrimaryTileUser(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileStoreChanged@TileStore@Tiles@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTileStore@Tiles@Internal@Windows@@PEAVTileStoreChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_TileStoreChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileStoreChanged@TileStore@Tiles@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileStoreChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStore@Tiles@Internal@Windows@@UEAA@XZ
    virtual ~TileStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStateRepoQueryFilter@TileStore@Tiles@Internal@Windows@@AEAAJPEAUITileQueryFilter@234@AEAW4TileType@StateRepository@34@PEAPEAUITileViewQueryFilter@734@@Z
    long CreateStateRepoQueryFilter(WindissectOpaque *, int &, ::Windows::Internal::StateRepository::ITileViewQueryFilter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppInfoInternalStatics@TileStore@Tiles@Internal@Windows@@AEAAJPEAPEAUIAppInfoInternalStatics@3ApplicationModel@4@@Z
    long EnsureAppInfoInternalStatics(::Windows::ApplicationModel::Internal::IAppInfoInternalStatics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePrimaryTileUserStatics@TileStore@Tiles@Internal@Windows@@AEAAJPEAPEAUIPrimaryTileUserStatics@StateRepository@34@@Z
    long EnsurePrimaryTileUserStatics(::Windows::Internal::StateRepository::IPrimaryTileUserStatics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSecondaryTileUserStatics@TileStore@Tiles@Internal@Windows@@AEAAJPEAPEAUISecondaryTileUserStatics@StateRepository@34@@Z
    long EnsureSecondaryTileUserStatics(::Windows::Internal::StateRepository::ISecondaryTileUserStatics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTileStoreChangedEvent@TileStore@Tiles@Internal@Windows@@AEAAJ_J@Z
    long FireTileStoreChangedEvent(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateRepositoryPrimaryTileChanged@TileStore@Tiles@Internal@Windows@@AEAAJPEAUIPrimaryTileUserNotifier@StateRepository@34@PEAUIPrimaryTileUserChangedEventArgs@634@@Z
    long OnStateRepositoryPrimaryTileChanged(::Windows::Internal::StateRepository::IPrimaryTileUserNotifier *, ::Windows::Internal::StateRepository::IPrimaryTileUserChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateRepositorySecondaryTileChanged@TileStore@Tiles@Internal@Windows@@AEAAJPEAUISecondaryTileUserNotifier@StateRepository@34@PEAUISecondaryTileUserChangedEventArgs@634@@Z
    long OnStateRepositorySecondaryTileChanged(::Windows::Internal::StateRepository::ISecondaryTileUserNotifier *, ::Windows::Internal::StateRepository::ISecondaryTileUserChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForStateRepositoryEvents@TileStore@Tiles@Internal@Windows@@AEAAJXZ
    long RegisterForStateRepositoryEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForStateRepositoryEvents@TileStore@Tiles@Internal@Windows@@AEAAJXZ
    long UnregisterForStateRepositoryEvents();
};
} // namespace Windows::Internal::Tiles
