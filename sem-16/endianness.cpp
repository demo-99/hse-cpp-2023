
#include <cstdint>
#include <fstream>
#include <iostream>

union S
{
    std::int32_t n;     // occupies 4 bytes
    std::uint16_t s[2]; // occupies 4 bytes
    std::uint8_t c;     // occupies 1 byte
    unsigned char raw_mem[4];
};                      // the whole union occupies 4 bytes

using namespace std;

int main(int argc, char** argv) {
    // read((unsigned char*), sizeof(int))
    // S s = {0x12345678}; // initializes the first member, s.n is now the active member
    // // at this point, reading from s.s or s.c is undefined behavior
    // std::cout << std::hex << "s.n = " << s.n << '\n';
    // s.s[0] = 0x0011; // s.s is now the active member
    // // at this point, reading from n or c is UB but most compilers define it
    // std::cout << "s.c is now " << +s.c << '\n' // 11 or 00, depending on platform
    //           << "s.n is now " << s.n << '\n'; // 12340011 or 00115678

    // auto netOrder = htonl(123);
    // cout << netOrder;

    std::fstream fs;
    fs.close();
}
