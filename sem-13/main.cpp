#include <iostream>
#include <cstdlib>
#include <string>

// N --dec --inc
namespace NMain::NCommandLine {

using namespace std;

void Printer(int n) {
    std::cout << n << std::endl;
}

}  // namespace NMain::NCommandLine

// namespace {
//     using namespace std;
//     void Printer(int n) {
//         cout << n << endl;
//     }
// }  // namespace

int main(int argc, char** argv) {  // argv[0] == main; argc == len(argv)
    int n;
    bool is_dec = false;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
        if (i == 0) {
            continue;
        }
        if (std::string(argv[i]) == "--dec") {
            is_dec = true;
        } else if (std::string(argv[i]) == "--inc") {
            is_dec = false;
        } else {
            n = atoi(argv[i]);
        }
    }

    if (is_dec) {
        --n;
    } else {
        ++n;
    }

    NMain::NCommandLine::Printer(n);
}
