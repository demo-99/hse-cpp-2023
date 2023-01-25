#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

void ChangeInt(short** a) {
    *a += 1; // static_cast<int>(*a) + sizeof(short*)
}

int main() {
    short a = 1;
    short b = 2;
    short* ptr_a = &a;
    short* ptr_b = &b;
    short** ptr_ptr_a = &ptr_a;

    char c_str[] = "asd";

    cout << "ptr_a: " << ptr_a << endl;
    cout << "ptr_b: " << ptr_b << endl;
    cout << "ptr_a - ptr_b: " << ptr_b - ptr_a << endl;
    cout << "ptr_a + ptr_b: " << ptr_b << endl;

    cout << "nasty ptr_a: " << *(ptr_b + 1) << endl;

    ChangeInt(&ptr_b);

    cout << "nasty ptr_a: " << *ptr_b << endl;

    cout << "a: " << *ptr_a << endl;
    cout << "a: " << a << endl;
}