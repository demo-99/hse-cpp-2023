#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << boolalpha;
    cout << (1.0 == 3 * 0.3 + 0.1) << endl;

    float sum = 0;
    float n = 0.00000000001;

    cout << (100000.00000000001 - 100000 == 0.00000000001) << endl;

    vector<float> reversed;

    while (n) {
        sum += n;
        reversed.push_back(n);
        n /= 2;
    }

    cout << "Sum is " << sum << endl;

    reverse(reversed.begin(), reversed.end());

    float reversed_sum = 0;
    for (const auto& elem : reversed) {
        reversed_sum += elem;
    }
    cout << "Reversed sum is " << reversed_sum << endl;

    cout << "Reversed sum equals to sum: " << (sum == reversed_sum) << endl;

    cout << "The least elem in vector is " << reversed[0] << endl;
    cout << (0.1 + 1e-44 == 0.1) << endl;
}