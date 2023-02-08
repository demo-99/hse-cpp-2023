#include <iostream>
#include <list>
#include <set>
#include <unordered_map>

struct Point{
    int x;
    int y;
};

int main()
{
    Point p{.y=1};
    std::cout << p.x << " " << p.y << std::endl;
}