#include <iostream>
#include <string>
#include <stack>

using namespace std;

int calculate(string s) {
    stack<int> numStack;
    stack<int> signStack;
    int num = 0;
    int result = 0;
    int sign = 1;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (c == '+' || c == '-') {
            result += sign * num;
            num = 0;
            sign = (c == '+') ? 1 : -1;
        } else if (c == '(') {
            numStack.push(result);
            signStack.push(sign);
            result = 0;
            sign = 1;
        } else if (c == ')') {
            result += sign * num;
            num = 0;
            result = result * signStack.top() + numStack.top();
            numStack.pop();
            signStack.pop();
        }
    }

    return result + (sign * num);
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // consume newline character

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);

        int result = calculate(s);
        cout << result << endl;
    }

    return 0;
}
