#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n <= 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n % 4 != 0) {
        return false;
    }
    return isPowerOfFour(n / 4);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        bool result = isPowerOfFour(n);
        cout << result << endl;
    }

    return 0;
}
