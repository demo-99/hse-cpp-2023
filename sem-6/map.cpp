#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// [1, 2, 3, 4], 5 == [0, 3]

vector<size_t> twoSum(const vector<int>& v, int sum) {
    unordered_map<int, size_t> diff;
    for (size_t i = 0; i < v.size(); ++i) {
        if (diff.find(sum - v[i]) != diff.end()) {
            return {i, diff[sum - v[i]]};
        }
        diff[v[i]] = i;
    }

    return {};
}

int main() {
    for (auto elem : twoSum({1, 2, 3, 4}, 4)) {
        cout << elem << endl;
    }
}