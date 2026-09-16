#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 14 member(s).
namespace Windows::Internal::Tiles {
class TileStorePackageInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TileStorePackageInfo@Tiles@Internal@Windows@@SAJAEBVPackage@Entity@StateRepository@@AEBVPackageLocation@67@_NPEAPEAVIPackageInfo@Deployment@Common@@@Z
    static long CreateInstance(WindissectOpaque const &, WindissectOpaque const &, bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppxManifestReader@TileStorePackageInfo@Tiles@Internal@Windows@@UEBAPEAUIAppxManifestReader@@XZ
    virtual IAppxManifestReader * GetAppxManifestReader() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@TileStorePackageInfo@Tiles@Internal@Windows@@UEBAPEBGXZ
    virtual unsigned short const * GetPackageFullName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageKey@TileStorePackageInfo@Tiles@Internal@Windows@@UEBA_JXZ
    virtual int64_t GetPackageKey() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealPackageRoot@TileStorePackageInfo@Tiles@Internal@Windows@@UEBAPEBGXZ
    virtual unsigned short const * GetRealPackageRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDevelopmentModeDeployment@TileStorePackageInfo@Tiles@Internal@Windows@@UEBA_NXZ
    virtual bool IsDevelopmentModeDeployment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMain@TileStorePackageInfo@Tiles@Internal@Windows@@UEBA_NXZ
    virtual bool IsMain() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStorePackageInfo@Tiles@Internal@Windows@@UEAA@XZ
    virtual ~TileStorePackageInfo();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppxManifestReader@TileStorePackageInfo@Tiles@Internal@Windows@@CAJAEBVPackage@Entity@StateRepository@@AEBVPackageLocation@67@AEAV?$ComPtr@UIAppxManifestReader@@@WRL@Microsoft@@@Z
    static long GetAppxManifestReader(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppxManifestReaderForPath@TileStorePackageInfo@Tiles@Internal@Windows@@CAJPEBGAEAV?$ComPtr@UIAppxManifestReader@@@WRL@Microsoft@@@Z
    static long GetAppxManifestReaderForPath(unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackupAppxManifestReader@TileStorePackageInfo@Tiles@Internal@Windows@@CAJAEBVPackage@Entity@StateRepository@@AEAV?$ComPtr@UIAppxManifestReader@@@WRL@Microsoft@@@Z
    static long GetBackupAppxManifestReader(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TileStorePackageInfo@Tiles@Internal@Windows@@AEAAJ_JPEBG1_N2AEBV?$ComPtr@UIAppxManifestReader@@@WRL@Microsoft@@@Z
    long Initialize(int64_t, unsigned short const *, unsigned short const *, bool, bool, WindissectOpaque const &);
};
} // namespace Windows::Internal::Tiles
