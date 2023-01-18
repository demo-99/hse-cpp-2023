#include <iostream>

int main() {
    unsigned n;
    std::cin >> n;
    std::cout << (10000 + (n << 1)) << std::endl; // == (10000 + n * 2)

    if (!n) { // (n != 0)
        std::cout << "not zero" << std::endl;
    }

    int i = 5;
    i = i++ + ++i; // 5 + ++(i=6) -> 5 + 7 
    std::cout << i << std::endl; // 12

    // Тернарный оператор
    n = n >=0 ? n + 2 : n - 2;
    std::cout << n << std::endl; 
}