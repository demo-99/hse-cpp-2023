#include <iostream>
#include <string>

using namespace std;

class A {
    string str;
    char* c_str;
    size_t size;
public:
    A() {
        cout << "default constructor" << endl;
    }

    A(A&& a) {
        swap(str, a.str);
        cout << "constructor &&" << endl;
    }

    A(const A& a) {
        cout << "constructor &" << endl;
    }

    A& operator=(A& other) {
         cout << "operator= &" << endl;
         return *this;
    }

    A& operator=(A&& other) {
         cout << "operator= &&" << endl;
         return *this;
    }

    void Print() {
        cout << str << endl;
    }

    void nastyCopyOperator(A& a) {
        *this = move(a);
    }
    // void nastyCopyOperator(const A& a) {
    //     *this = move(a);
    // }
    void nastyCopyOperator(A&& a) {
        *this = move(a);
    }
};

void Print(A&& str) {
    A a = std::move(str);
    a.Print();
}

int main() {
    A a0;
    // Print(std::move(a));
    A a1;
    cout << endl;
    a0.nastyCopyOperator(move(a1));
    cout << endl;
    a0.nastyCopyOperator(a1);
    // a invalid
}
