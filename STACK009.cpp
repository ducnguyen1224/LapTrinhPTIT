#include <iostream>
#include <string>
#include <stack>

using namespace std;

string decodeString(string s) {
    stack<int> counts;
    stack<string> resultStack;

    int i = 0;
    string result = "";

    while (i < s.length()) {
        if (isdigit(s[i])) {
            int count = 0;
            while (isdigit(s[i])) {
                count = count * 10 + (s[i] - '0');
                i++;
            }
            counts.push(count);
        } else if (s[i] == '[') {
            resultStack.push(result);
            result = "";
            i++;
        } else if (s[i] == ']') {
            string temp = result;
            result = resultStack.top();
            resultStack.pop();
            int count = counts.top();
            counts.pop();
            for (int j = 0; j < count; j++) {
                result += temp;
            }
            i++;
        } else {
            result += s[i];
            i++;
        }
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

        string result = decodeString(s);
        cout << result << endl;
    }

    return 0;
}

