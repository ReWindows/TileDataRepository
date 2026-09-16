#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 6 member(s).
namespace Windows::Internal::Tiles {
class XmlQueryHelper {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueStringFromElement@XmlQueryHelper@Tiles@Internal@Windows@@YAJAEAUIXMLDOMElement@@PEBGAEAVStringBuffer@Common@@@Z
    long GetAttributeValueStringFromElement(IXMLDOMElement &, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromNodeList@XmlQueryHelper@Tiles@Internal@Windows@@YAJAEAUIXMLDOMNodeList@@JPEAPEAUIXMLDOMElement@@@Z
    long GetElementFromNodeList(IXMLDOMNodeList &, long, IXMLDOMElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringProperty@XmlQueryHelper@Tiles@Internal@Windows@@YAJAEAUIXMLDOMElement@@PEBGAEAVStringBuffer@Common@@AEA_N@Z
    long GetStringProperty(IXMLDOMElement &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringValueFromElement@XmlQueryHelper@Tiles@Internal@Windows@@YAJAEAUIXMLDOMElement@@PEBGAEAVStringBuffer@Common@@AEA_N@Z
    long GetStringValueFromElement(IXMLDOMElement &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXMLElementFromQuery@XmlQueryHelper@Tiles@Internal@Windows@@YAJAEAUIXMLDOMElement@@PEBGPEAPEAU5@@Z
    long GetXMLElementFromQuery(IXMLDOMElement &, unsigned short const *, IXMLDOMElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXMLNodeListFromQuery@XmlQueryHelper@Tiles@Internal@Windows@@YAJAEAUIXMLDOMElement@@PEBGPEAPEAUIXMLDOMNodeList@@@Z
    long GetXMLNodeListFromQuery(IXMLDOMElement &, unsigned short const *, IXMLDOMNodeList * *);
};
} // namespace Windows::Internal::Tiles
