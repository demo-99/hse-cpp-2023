#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

// Требуется удалить из строки все символы кроме пробелов и латинских букв
// "a[dsa]d}]123sa]d" - > "adsadsad"

string FilterString(string& str) {  // Обратите внимание, что мы можем менять входной аргумент
    size_t result_index = 0;
    size_t old_index = 0;
    while (old_index < str.length()) {
        if (isalpha(str[old_index])) {
            str[result_index] = str[old_index];
            ++result_index;
        }
        ++old_index;
    }
    // str[:result_index] == correct_answer
    str.resize(result_index);
    return str;
}

int main() {
    string str;
    cin >> str;
    str = FilterString(str);
    cout << "Filtered string: " << str << endl;
}
