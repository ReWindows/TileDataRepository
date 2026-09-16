#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace Common {
class StateSeparation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePathRegValue@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEBG1KPEAPEAG@Z
    static long GetFilePathRegValue(WindissectOpaque const &, unsigned short const *, unsigned short const *, unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsStateSeparationEnabled@StateSeparation@Common@@SAJPEA_N@Z
    static long GetIsStateSeparationEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedRegKeyPath@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEAG@Z
    static long GetPersistedRegKeyPath(WindissectOpaque const &, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedRegKeyPath@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEBG_KPEAPEAG@Z
    static long GetPersistedRegKeyPath(WindissectOpaque const &, unsigned short const * *, uint64_t, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegKeyContainingValue@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEBG_KPEBGKPEAVRegistryKey@2@@Z
    static long GetRegKeyContainingValue(WindissectOpaque const &, unsigned short const * *, uint64_t, unsigned short const *, unsigned long, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRegValue@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEBG_KPEBGKPEAPEAG@Z
    static long GetStringRegValue(WindissectOpaque const &, unsigned short const * *, uint64_t, unsigned short const *, unsigned long, unsigned short * *);
};
} // namespace Common
