#include <ios>
#include <iostream>

using namespace std;

class B {
public:
    explicit operator int() const {
        return 42;
    }
};

class T {
private:
    int hack = 123;
public:
    static int counter;
    static int copy_counter;
    int object_counter = 0;
    T() {
        ++counter;
        cout << "Counter " << counter << endl;
    }

    T operator=(const T& other) {
        ++copy_counter;
        cout << "Copy counter " << copy_counter << endl;
        return *this;
    }

    T operator+(const T& other) const {
        return *this;
    }

    T(const T& other) {
        ++copy_counter;
        cout << "Counter " << copy_counter << endl;
    }
    explicit T(int n) {
        counter++;
    }
    static void PrintFunction() {
        cout << "Counter " << counter << endl;
    }

    int* GetValue(int counter) {
        cout << boolalpha;
        cout << (this->counter == counter) << endl;
        return &this->hack;
    }

    void PrintHack() const {
        cout << "Hack " << hack << endl;
    }

    // T GetValue(int counter) {
    //     cout << boolalpha;
    //     cout << (this->counter == counter) << endl;
    //     return *this;
    // }

    ~T() {
        cout << "\nDestructor call";
        cout << ". Counter " << copy_counter;
        cout << ". Copy counter " << copy_counter << endl;
        --counter;
    }
};

int T::counter{0};
int T::copy_counter{0};

int main() {
    // B tmp;
    // auto c = int(tmp);
    // T a;
    // a.PrintFunction();
    // {
    //     T b;
        // a.PrintFunction();
    // }
    // a.PrintFunction();
    // a.GetValue(1);

    // T a;
    // a = a + T();  // a = a.operator+(T());

    T a;
    int* c = a.GetValue(2);
    *static_cast<int*>(static_cast<void*>(&a)) = 13;
    a.PrintHack();

    // T b;
    // T a = b;
}