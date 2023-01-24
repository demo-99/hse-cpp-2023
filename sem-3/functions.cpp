#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintHello(const string tmp) {
    string new_string = tmp;
    cout << "Hello world!" << endl;
}

void PrintHello(string&& tmp) {
    string new_string = tmp;  // new_string = "asd";
    cout << "Hello world! Reffunct" << endl;
}

int main() {
    PrintHello("asd");
    string tmp = "asd";
    PrintHello(tmp);

    char str[] = "asdasdasd";
    cout << *&str << endl;
    cout << *((char*)((int*)(&str) + 1)) << endl;  // char* + 1 == ptr + 8bit; int* + 1 == ptr + 32bit
    // cout << *(str.begin() + 1) << endl;    
}