#include <iostream>

using namespace std;

class Proto {
public:
    void SetInt(int a) {}
    void SetString(const string& s) {}
    int GetInt() {
        return 0;
    }
    string GetString() {
        return "abc";
    }
};


#define SET_FIELD(src, dst, srcField, dstField)  \
{                                                \
    dst.Set##dstField(src.Get##dstField());      \
    cout << #src << #srcField << endl;           \
}

int main() {
    Proto p1, p2;
    SET_FIELD(p1, p2, Int, Int);
    SET_FIELD(p1, p2, String, String);
}