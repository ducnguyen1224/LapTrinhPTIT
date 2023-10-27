#include <iostream>
#include <stack>
#include <vector>

int min_insertions_to_make_valid(const std::string &s) {
    std::stack<char> stk;
    int insertions = 0;

    for (char c : s) {
        if (c == '(') {
            stk.push(c);
        } else {
            if (stk.empty()) {
                insertions++;
            } else {
                stk.pop();
            }
        }
    }

    insertions += stk.size(); // Đếm số lượng ngoặc mở còn lại trong stack

    return insertions;
}

int main() {
    int t;
    std::cin >> t;
    std::vector<int> results;

    for (int i = 0; i < t; i++) {
        std::string s;
        std::cin >> s;
        int insertions = min_insertions_to_make_valid(s);
        results.push_back(insertions);
    }

    // In kết quả
    for (int result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
