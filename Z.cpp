#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Hàm kiểm tra xem biểu thức có dư thừa ngoặc hay không
string checkParentheses(const string& expression) {
    stack<char> parenthesesStack;

    for (char ch : expression) {
        if (ch == '(') {
            parenthesesStack.push(ch);
        } else if (ch == ')') {
            if (parenthesesStack.empty()) {
                return "Yes"; // Nếu stack rỗng mà gặp ngoặc đóng, có nghĩa là dư thừa
            }
            parenthesesStack.pop();
        }
    }

    // Nếu stack không rỗng sau khi duyệt xong biểu thức, có nghĩa là ngoặc mở còn dư thừa
    return parenthesesStack.empty() ? "No" : "Yes";
}

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore(); // Đọc ký tự xuống dòng sau số lượng bộ test

    for (int i = 0; i < testCases; ++i) {
        string expression;
        getline(cin, expression);
        cout << checkParentheses(expression) << endl;
    }

    return 0;
}
