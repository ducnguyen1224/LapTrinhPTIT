#include <iostream>
#include <string>
#include <stack>

std::string removeDuplicates(const std::string& s) {
    std::stack<char> charStack;

    for (char ch : s) 
        if (!charStack.empty() && charStack.top() == ch) {
            charStack.pop();
        } else {
            charStack.push(ch);
        }
    }

    std::string result = "";
    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::string result = removeDuplicates(s);
        std::cout << result << std::endl;
    }
    return 0;
}