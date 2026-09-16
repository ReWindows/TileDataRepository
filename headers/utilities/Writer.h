#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 16 member(s).
namespace StateRepository::DictionarySerialization {
class Writer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Writer@DictionarySerialization@StateRepository@@QEAAJPEBGW4DataType@23@_KPEBXPEB_K@Z
    long Add(unsigned short const *, int, uint64_t, void const *, uint64_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArrayOfFixedLengthData@Writer@DictionarySerialization@StateRepository@@QEAAJPEBGW4DataType@23@_KPEBX@Z
    long AddArrayOfFixedLengthData(unsigned short const *, int, uint64_t, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArrayOfString@Writer@DictionarySerialization@StateRepository@@QEAAJPEBGW4DataType@23@_KPEBQEAG@Z
    long AddArrayOfString(unsigned short const *, int, uint64_t, unsigned short * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBoolean@Writer@DictionarySerialization@StateRepository@@QEAAJPEBG_N@Z
    long AddBoolean(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@Writer@DictionarySerialization@StateRepository@@QEAAJPEBG0@Z
    long AddString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@Writer@DictionarySerialization@StateRepository@@QEAAJP6AJAEAV123@PEAXPEBGW4DataType@23@_KPEBXPEB_KPEAW4CallbackDisposition@123@@Z1P6AJ0123456@Z1@Z
    long Begin(long ( *)(WindissectOpaque &, void *, unsigned short const *, int, uint64_t, void const *, uint64_t const *, int *), void *, long ( *)(WindissectOpaque &, void *, unsigned short const *, int, uint64_t, void const *, uint64_t const *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@Writer@DictionarySerialization@StateRepository@@QEAAJXZ
    long End();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@Writer@DictionarySerialization@StateRepository@@QEBA_KXZ
    uint64_t GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@Writer@DictionarySerialization@StateRepository@@QEBAPEBXXZ
    void const * GetData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@Writer@DictionarySerialization@StateRepository@@QEBA_KXZ
    uint64_t GetSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeySize@Writer@DictionarySerialization@StateRepository@@SAGPEBG@Z
    static unsigned short KeySize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeOfPair@Writer@DictionarySerialization@StateRepository@@SAI_KW4DataType@23@0PEB_K@Z
    static unsigned int SizeOfPair(uint64_t, int, uint64_t, uint64_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeOfPairVariableLengthDataArray@Writer@DictionarySerialization@StateRepository@@SAI_K00@Z
    static unsigned int SizeOfPairVariableLengthDataArray(uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringSize@Writer@DictionarySerialization@StateRepository@@SA_KPEBG@Z
    static uint64_t StringSize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForAddedPair@Writer@DictionarySerialization@StateRepository@@QEAAJXZ
    long UpdateForAddedPair();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeader@Writer@DictionarySerialization@StateRepository@@AEBAPEBUHeader@23@XZ
    WindissectOpaque const * GetHeader() const;
};
} // namespace StateRepository::DictionarySerialization
