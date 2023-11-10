#include <iostream>
#include <string>
using namespace std;

void reverse_String(string &text, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(text[start], text[end]);
    reverse_String(text, start + 1, end - 1);
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  // Đọc ký tự '\n' sau t

    for (int i = 0; i < t; ++i) {
        string s;
        getline(cin, s);
        reverse_String(s, 0, s.length() - 1);
        cout << s << endl;
    }

    return 0;
}
