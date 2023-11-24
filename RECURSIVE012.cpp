#include <iostream>
#include <string>
#include <queue>

using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        if (isPalindrome(s)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}