#include <iostream>
#include <unordered_map>

using namespace std;

template <typename Type>
class SharedPtr {
    static unordered_map<Type*, size_t> counter;
    Type* valuePtr = nullptr;

public:
    SharedPtr() {
        valuePtr = new Type;
        ++counter[valuePtr];
    }

    SharedPtr(const SharedPtr& r) {
        valuePtr = r.valuePtr;
        ++counter[valuePtr];
    }

    SharedPtr& operator=(const SharedPtr& r) {
        valuePtr = r.valuePtr;
        ++counter[valuePtr];
        return *this;
    }

    ~SharedPtr() {
        for (const auto& elem : counter) {
            cout << elem.first << " " << elem.second << endl;
        }
        cout << endl;
        --counter[valuePtr];
        if (counter[valuePtr] == 0) {
            delete valuePtr;
        }
    }

    Type& operator*() {
        return *valuePtr;
    }
};

template<typename Type>
unordered_map<Type*, size_t> SharedPtr<Type>::counter;

int main() {
    SharedPtr<int> sp0;

    SharedPtr<int> sp1 = sp0;
    *sp1 = 1;
    SharedPtr<int> sp2 = SharedPtr<int>();
    cout << *sp0 << endl;
}