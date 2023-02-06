#include <iostream>

int func(const int& a) {
    return a;
}

int main() {
    func(5);
}