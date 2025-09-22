#include "ColorCoder.h"
#include <sstream>

namespace TelCoColorCoder {

ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBased = pairNumber - 1;
    MajorColor major = static_cast<MajorColor>(zeroBased / numberOfMinorColors);
    MinorColor minor = static_cast<MinorColor>(zeroBased % numberOfMinorColors);
    return ColorPair(major, minor);
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}

std::vector<ColorPair> GetAllColorPairs() {
    std::vector<ColorPair> pairs;
    for (int major = 0; major < numberOfMajorColors; ++major)
        for (int minor = 0; minor < numberOfMinorColors; ++minor)
            pairs.emplace_back(static_cast<MajorColor>(major), static_cast<MinorColor>(minor));
    return pairs;
}

std::string FormatColorReference() {
    std::ostringstream oss;
    auto pairs = GetAllColorPairs();
    int pairNumber = 1;
    for (auto &pair : pairs) {
        oss << pairNumber++ << " | " << pair.ToString() << "\n";
    }
    return oss.str();
}

std::string FormatColorReferenceCSV() {
    std::ostringstream oss;
    oss << "PairNumber,MajorColor,MinorColor\n";
    auto pairs = GetAllColorPairs();
    int pairNumber = 1;
    for (auto &pair : pairs) {
        oss << pairNumber++ << "," << MajorColorNames[pair.getMajor()]
            << "," << MinorColorNames[pair.getMinor()] << "\n";
    }
    return oss.str();
}

} // namespace TelCoColorCoder
