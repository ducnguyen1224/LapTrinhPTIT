#include <iostream>
#include <queue>
#include <vector>
#include <sstream>

bool checkEqual(std::queue<int>& q1, std::queue<int>& q2) {
    if (q1.size() != q2.size()) {
        return false; // Số lượng phần tử trong hai hàng đợi khác nhau
    }

    while (!q1.empty() && !q2.empty()) {
        if (q1.front() != q2.front()) {
            return false; // Phần tử ở vị trí hiện tại không giống nhau
        }
        q1.pop();
        q2.pop();
    }

    return true;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        std::queue<int> q1, q2;
        std::string input1, input2;
        std::cin >> input1 >> input2;

        std::istringstream ss1(input1);
        std::istringstream ss2(input2);

        int num1, num2;
        while (ss1 >> num1) {
            q1.push(num1);
        }
        while (ss2 >> num2) {
            q2.push(num2);
        }

        bool areEqual = checkEqual(q1, q2);
        std::cout << (areEqual ? 1 : 0) << std::endl;
    }

    return 0;
}
