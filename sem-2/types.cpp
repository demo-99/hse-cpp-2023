#include <iostream>

int main() {
    std::cout << (static_cast<uint64_t>(-1) == UINT64_MAX) << std::endl;
    std::cout << "long size is " << sizeof(long) << std::endl;
    std::cout << "long double size is " << sizeof(long double) << std::endl;
    std::cout << "short size is " << sizeof(short) << std::endl;
}