#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename Type1, typename Type2>
class A {
Type1 t1;
Type2 t2;
public:
    void Printer() {
        std::cout << "template_1" << std::endl;
    }
};

template<typename Type>
class A<int, Type> {
int t1 = 42;
Type t2;
public:
    void Printer() {
        std::cout << "template_2" << std::endl;
    }
};

int main() {
    A<vector<int>, int> a;
    A<int, int> a1;
    a.Printer();
    a1.Printer();
    // a.Printer();
}
