#include <iostream>
#include <string>
using namespace std;

long long binaryStringToDecimal(string s) {
    long long result = 0;
    for (char c : s) {
        result = result * 2 + (c - '0');
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;

        long long num1 = binaryStringToDecimal(S1);
        long long num2 = binaryStringToDecimal(S2);

        long long product = num1 * num2;
        cout << product << endl;
    }

    return 0;
}
