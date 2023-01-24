#include <algorithm>
#include <climits>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << (static_cast<uint64_t>(-1) == ~0ull) << endl;
    cout << static_cast<uint64_t>(-1) << endl;
    cout << numeric_limits<uint64_t>::max() << endl;
    cout << UINT64_MAX << endl;
    cout << sizeof(UINT16_MAX) * CHAR_BIT << endl;

    float sum = 1.0;  // sum 1 sign; bit 10 bit accuracy; 21 bit value
    std::cout << std::fixed;
    std::cout << std::setprecision(20);
    cout << 0.1 << endl;  // ~ value 1 * accuracy 10^-1
}