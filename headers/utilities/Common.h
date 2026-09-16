#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 8 member(s).
class Common {
public:
    class CryptoProvider;
    class Deployment;
    class FileInUseProcessInformation;
    class PathHelpers;
    class RegistryKey;
    class SidHelper;
    class StateSeparation;
    class String;
    class StringBuffer;
    class StringBufferBuilder;
    class StringBuilder;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandleHelper@Common@@YAXPEAX@Z
    void CloseHandleHelper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStringToOutput@Common@@YAJPEBGPEAPEAG@Z
    long CopyStringToOutput(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileInUseByProcesses@Common@@YAJPEBGIPEAIPEAK@Z
    long FileInUseByProcesses(unsigned short const *, unsigned int, unsigned int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericMapCaseInsensitiveCompare@Common@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z
    int GenericMapCaseInsensitiveCompare(_RTL_AVL_TABLE *, void *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileInUseProcessInformation@Common@@YAJKPEAXAEAUFileInUseProcessInformation@1@@Z
    long GetFileInUseProcessInformation(unsigned long, void *, WindissectOpaque &);
};
