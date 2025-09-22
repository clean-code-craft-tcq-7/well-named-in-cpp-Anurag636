#pragma once
#include <string>

namespace TelCoColorCoder {

enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

const int numberOfMajorColors = 5;
const int numberOfMinorColors = 5;

extern const char* MajorColorNames[numberOfMajorColors];
extern const char* MinorColorNames[numberOfMinorColors];

class ColorPair {
    MajorColor majorColor;
    MinorColor minorColor;

public:
    ColorPair(MajorColor major, MinorColor minor);
    MajorColor getMajor() const;
    MinorColor getMinor() const;
    std::string ToString() const;
};

} // namespace TelCoColorCoder
