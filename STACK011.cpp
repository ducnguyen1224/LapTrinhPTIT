#include <iostream>
#include <string>
#include <stack>

#include <algorithm>
using namespace std;

string reverseParentheses(const string& s) {
    stack<int> st;
    string result = "";
    string current = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            int openIndex = st.top();
            st.pop();
            current = s.substr(openIndex + 1, i - openIndex - 1);
            reverse(current.begin(), current.end());
            result = s.substr(0, openIndex) + current + s.substr(i + 1);
            return reverseParentheses(result);
        }
    }

    return s;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string s;
        getline(cin, s);

        string result = reverseParentheses(s);
        cout << result << endl;
    }

    return 0;
}
