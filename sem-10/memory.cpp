#include <iostream>

using namespace std;

// class T {
// public:
//     T() {
//         cout << "T created.\n";
//     }
// };

int main() {
    // {
    //     int** a = new int*[5];
    //     for (size_t i = 0; i < 5; ++i) {
    //         a[i] = new int[5];
    //         for (size_t j = 0; j < 5; ++j) {
    //             a[i][j] = i * 5 + j;
    //             cout << *(*(a + i) + j) << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;

    //     for (size_t i = 0; i < 5; ++i) {
    //         delete[] a[i];
    //     }
    //     delete[] a;
    // }

    // cout << endl;

    // cout << sizeof(string) << endl;

    char* a = new char[10];
    size_t size = 10;
    string tmp;
    cin >> tmp;
    size_t i = 0;
    for (const char c : tmp) {
        a[i++] = c;
        if (i == size) {
            size *= 2;
            char* reallocated = new char[size];
            for (size_t j = 0; j < size; ++j) {
                reallocated[j] = a[j];
            }
            delete[] a;
            a = reallocated;
        }
    }
    a[i] = '\0';  // 0

    i = 0;
    while (a[i]) {
        cout << a[i++];
    }

    cout << endl;
}