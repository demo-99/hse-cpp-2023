#include <iostream>

int func() {
    return 42;
}

int main() {
    int n;
    std::cin >> n;
    switch (n) {
        case 0:
            std::cout << "zero" << std::endl;
            [[fallthrough]];
        default:
            std::cout << "not zero" << std::endl;
    }
    /* switch (v.size()) {
        case 3:
            v[2] = 3;
            [[fallthrough]];
        case 2:
            v[1] = 2;
            [[fallthrough]];
        case 1:
            v[0] = 1;
    }*/

}