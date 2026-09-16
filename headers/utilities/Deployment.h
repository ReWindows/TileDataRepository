#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 2 member(s).
namespace Common {
class Deployment {
public:
    class IPackageInfo;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyIsAdminOrLocalService@Deployment@Common@@YAJXZ
    long VerifyIsAdminOrLocalService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyTokenAgainstSecurityDescriptor@Deployment@Common@@YAJPEAXPEBG@Z
    long VerifyTokenAgainstSecurityDescriptor(void *, unsigned short const *);
};
} // namespace Common
