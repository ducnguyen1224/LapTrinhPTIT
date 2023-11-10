#include <iostream>
using namespace std;

int countDigitOne(int n) {
    int count = 0;
    
    for (long long i = 1; i <= n; i *= 10) {
        long long divider = i * 10;
        count += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int result = countDigitOne(n);
        cout << result << endl;
    }

    return 0;
}
