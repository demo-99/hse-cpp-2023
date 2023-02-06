#include <iostream>
#include <vector>

using namespace std;

// Вернуть результат умножения всех элементов массива кроме текущего элемента
// [1, 2, 3, 4] -> [24, 12, 8, 6]
// Гарантируется, что любое произведение влезете в long

vector<long> prodVector(const vector<long>& v) {
    vector<long> res;
    res.reserve(v.size());
    for (size_t i = 0; i < v.size(); ++i) {
        res.push_back(1);
        if (i != 0) {
            res[i] = (v[i - 1] * res[i - 1]);
        }
        cout << res[i] << endl;
    }
    cout << endl;

    long long suff = 1;
    for (size_t i = v.size() - 1; i > 0; --i) {
        suff *= v[i];
        res[i - 1] *= suff;
    }
    // [1, 1, 8, 6] suffix = 4
    // [1, 12, 8, 6] suffix = 12
    // [24, 12, 8, 6] suffix = 24

    return res;
}

int main() {
    vector<long> vec = prodVector({1, 2, 3, 4});
    for (auto it = vec.begin(); it != vec.end(); ++it) {
      cout << *it << endl;
    }
}