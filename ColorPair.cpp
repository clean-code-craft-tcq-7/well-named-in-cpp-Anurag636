#include "ColorPair.h"

namespace TelCoColorCoder {

const char* MajorColorNames[numberOfMajorColors] =
    { "White", "Red", "Black", "Yellow", "Violet" };

const char* MinorColorNames[numberOfMinorColors] =
    { "Blue", "Orange", "Green", "Brown", "Slate" };

ColorPair::ColorPair(MajorColor major, MinorColor minor) :
    majorColor(major), minorColor(minor) {}

MajorColor ColorPair::getMajor() const {
    return majorColor;
}

MinorColor ColorPair::getMinor() const {
    return minorColor;
}

std::string ColorPair::ToString() const {
    return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
}

} // namespace TelCoColorCoder
