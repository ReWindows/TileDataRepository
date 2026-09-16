#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 3 member(s).
namespace StateRepository::DictionarySerialization {
class WinRTWriter {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTWriter@DictionarySerialization@StateRepository@@QEAA@XZ
    ~WinRTWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeyValue@WinRTWriter@DictionarySerialization@StateRepository@@AEAAJPEBGPEAUIInspectable@@@Z
    long AddKeyValue(unsigned short const *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertySet@WinRTWriter@DictionarySerialization@StateRepository@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long AddPropertySet(WindissectOpaque *);
};
} // namespace StateRepository::DictionarySerialization
