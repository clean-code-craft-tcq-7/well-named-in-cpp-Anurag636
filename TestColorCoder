#include "ColorCoder.h"
#include <assert.h>
#include <iostream>

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    auto pair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    assert(pair.getMajor() == expectedMajor);
    assert(pair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    assert(pairNumber == expectedPairNumber);
}

void testReferenceFormat() {
    std::string manual = TelCoColorCoder::FormatColorReference();
    std::string csv = TelCoColorCoder::FormatColorReferenceCSV();
    assert(!manual.empty());
    assert(!csv.empty());
}

int main_test() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    testReferenceFormat();
    std::cout << "All tests passed!\n";
}
