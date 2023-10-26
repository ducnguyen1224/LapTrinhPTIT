#include <iostream>
#include <string>

using namespace std;

bool backspaceCompare(string s, string t) {
    string sResult = "";
    string tResult = "";

    for (char c : s) {
        if (c == '#') {
            if (!sResult.empty()) {
                sResult.pop_back();
            }
        } else {
            sResult += c;
        }
    }

    for (char c : t) {
        if (c == '#') {
            if (!tResult.empty()) {
                tResult.pop_back();
            }
        } else {
            tResult += c;
        }
    }

    return sResult == tResult;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // consume newline character

    for (int i = 0; i < t; i++) {
        string s, t;
        cin >> s >> t;

        bool result = backspaceCompare(s, t);
        cout << result << endl;
    }

    return 0;
}
