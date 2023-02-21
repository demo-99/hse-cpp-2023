#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void f(const std::unordered_map<std::string, int>& values, const std::string& key) {
    cout << values.at(key);
}

int main() {

}