#include <iostream>

class C {
public:
    C() {
        std::cout << 1;
    }

    C(const C& c) {
        std::cout << 2;
    }

    C& operator = (const C& c) {
        std::cout << 3;
        return *this;
    }
};

int main() {
    C c1;
    C c2(c1);
    C c3 = c2; // c3(c2)
    c1 = c3;
}