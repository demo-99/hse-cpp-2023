#include "printer.h"

#include "util.h"

void Printer(const std::string& s) {
    std::string copy = s;
    RemoveLastCharacter(copy);
    std::cout << copy << std::endl;
}
