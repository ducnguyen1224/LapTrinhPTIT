#include <iostream>
#include <string>
#include <stack>

using namespace std;

string processString(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '*') {
            if (!st.empty()) {
                st.pop();
            }
        } else {
            st.push(c);
        }
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // consume newline character

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);

               string result = processString(s);
        cout << result << endl;
    }

    return 0;
}
