#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>

using namespace std;

// Дан массив чисел; нужно вывести k наиболее повторяющихся

struct Tmp {
    int key;
    int counter;

    bool operator<(const Tmp& other) {
        return counter < other.counter;
    }
};

vector<int> TopFrequent(const vector<int>& v, int k) {
    vector<int> res;

    unordered_map<int, int> map_counter;
    for (const int elem : v) {
        map_counter[elem]++;
    }

    priority_queue<Tmp> pq;
    vector<vector<int>> counter(v.size() + 1, vector<int>(0));

    for (const auto& elem : map_counter) {
        counter[elem.second].push_back(elem.first);
    }

    for (int i = counter.size() - 1; i >= 0; --i) {
        for (int c : counter[i]) {
            res.push_back(c);
            k--;
            if (k == 0) {
                break;
            }
        }
        if (k == 0) {
            break;
        }
    }

    return res;
}

int main() {
    vector<int> input = {1, 2, 3, 1, 1, 3};

    auto res = TopFrequent(input, 2);

    for (const auto& elem : res) {
        cout << elem << ", ";
    }
    cout << endl;
}