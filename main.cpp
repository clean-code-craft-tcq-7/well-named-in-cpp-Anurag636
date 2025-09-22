#include "ColorCoder.h"
#include <iostream>


int main() {
    std::cout << "Color Reference Manual:\n";
    std::cout << TelCoColorCoder::FormatColorReference() << "\n";

    std::cout << "CSV Format:\n";
    std::cout << TelCoColorCoder::FormatColorReferenceCSV() << "\n";

    return 0;
}
