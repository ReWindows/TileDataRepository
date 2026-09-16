#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 11 member(s).
namespace StateRepository {
class Globals {
public:
    class PartitionSettings;
    class PolicySettings;
    class Registry;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandMacros@Globals@StateRepository@@YAJPEBGAEAV?$AutoArray@G$1??$AutoArrayDeallocate@G@Common@@YAXPEAG@Z@Common@@@Z
    long ExpandMacros(unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppRepositoryPath@Globals@StateRepository@@YAJAEAV?$AutoArray@G$1??$AutoArrayDeallocate@G@Common@@YAXPEAG@Z@Common@@@Z
    long GetAppRepositoryPath(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabaseCorruptionLastReported@Globals@StateRepository@@YAJW4Partition@2@PEA_K11@Z
    long GetDatabaseCorruptionLastReported(int, uint64_t *, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistrySubkeyStatusForPartition@Globals@StateRepository@@YAPEBGW4Partition@2@@Z
    unsigned short const * GetRegistrySubkeyStatusForPartition(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBG1AEAV?$AutoArray@G$1??$AutoArrayDeallocate@G@Common@@YAXPEAG@Z@4@@Z
    long GetSetting(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBGIPEAI@Z
    long GetSetting(WindissectOpaque &, unsigned short const *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@Globals@StateRepository@@YAJAEAVRegistryKey@Common@@PEBG_KPEA_K@Z
    long GetSetting(WindissectOpaque &, unsigned short const *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Globals@StateRepository@@YAJP6AJW4Partition@2@PEAPEAG@ZPEBG33W4Flags@12@@Z
    long Initialize(long ( *)(int, unsigned short * *), unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettings@Globals@StateRepository@@YAJW4Flags@12@@Z
    long LoadSettings(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDatabaseCorruptionLastReported@Globals@StateRepository@@YAJW4Partition@2@_K11@Z
    long SetDatabaseCorruptionLastReported(int, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@Globals@StateRepository@@YAJW4Flags@12@@Z
    long Shutdown(int);
};
} // namespace StateRepository
