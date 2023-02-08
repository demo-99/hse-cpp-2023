#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <stack>
#include <cstdlib>

int ComputeExpression(const std::vector<std::string>& expressions) {
    // s[i] == {"+" | "-" | "*" | "/"}
    // s[i] == "123"
    // (1 2 3 + -) -> (1 5 -) -> (-4)
    std::stack<int> result;
    for (std::string i : expressions) {
        if (i == "+" || i == "-" || i == "*" || i == "/") {
            int prev = result.top();
                result.pop();
                int now =  result.top();
                std::string sign = i;
                result.pop();
                if (sign == "+") {
                    result.push(prev + now);
                } else if (sign == "-") {
                    result.push(now - prev);
                } else if (sign == "*") {
                    result.push(now * prev);
                } else {
                    result.push(now / prev);
                }
        } else {
            result.push(std::stoi(i));

            }

    }
    return result.top();
}

int main() {
    const std::vector<std::string> expressions {"1", "2", "3", "+", "-"};
    std::cout << ComputeExpression(expressions) << std::endl;

}