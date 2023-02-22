#include "reader.h"

#include "util.h"

#include <iostream>

std::string Scaner() {
    std::string tmp;
    std::cin >> tmp;
    RemoveLastCharacter(tmp);
    return tmp;
}
