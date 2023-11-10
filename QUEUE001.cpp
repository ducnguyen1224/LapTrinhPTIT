#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int result = firstUniqChar(s);
        cout << result << endl;
    }
    return 0;
}
