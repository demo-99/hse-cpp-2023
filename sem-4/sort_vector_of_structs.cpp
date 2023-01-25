#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

struct Point {
    int x;
    int y;
};

bool PointComparator(const Point& left, const Point& right) {
    return tie(left.x, left.y) < tie(right.x, right.y);
}

void SortVector(vector<Point>& vec) {
    sort(vec->begin(), vec->end(), PointComparator);
}

int main() {
    int n;
    cin >> n;
    vector<Point> my_vector;

    cout << "Before: ";
    for (int i = 0; i < n; ++i) {
        Point p{(2 * i - 1) % 13, (4 * i + 3) % 7};
        my_vector.push_back(p);    
        cout << "(" << p.x << ";" << p.y << ") ";
    }
    cout << endl;

    cout << "After : ";
    SortVector(0);
    for (const auto& p : my_vector) {
        cout << "(" << p.x << ";" << p.y << ") ";
    }
    cout << endl;
}
