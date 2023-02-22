#pragma once

#include <string>

void RemoveLastCharacter(std::string& s) {
    if (s.size()) {
        s.resize(s.size()-1);
    }
}
