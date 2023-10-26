#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);

        queue<char> charQueue;
        for (char c : s) {
            if (isalpha(c)) {
                charQueue.push(c);
            }
        }

        string reversedString;
        while (!charQueue.empty()) {
            reversedString = charQueue.front() + reversedString;
            charQueue.pop();
        }

        cout << reversedString << endl;
    }

    return 0;
}
