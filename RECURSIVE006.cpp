#include <iostream>
#include <cmath>
using namespace std;
const int MOD = 1000000007;

long long fastPow(long long x, long long y) {
    if (y == 0) return 1;
    if (y % 2 == 0) {
        long long half = fastPow(x, y / 2);
        return (half * half) % MOD;
    } else {
        return (x * fastPow(x, y - 1)) % MOD;
    }
}

int countGoodNumbers(long long n) {
    long long evenCount = (n + 1) / 2; // Số chữ số chẵn (0, 2, 4, 6, 8) có thể ở vị trí chẵn
    long long oddCount = n / 2; // Số chữ số lẻ (2, 3, 5, 7) có thể ở vị trí lẻ

    long long result = (fastPow(5, evenCount) * fastPow(4, oddCount)) % MOD;
    return static_cast<int>(result);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;

        int goodNumbers = countGoodNumbers(n);
        cout << goodNumbers << endl;
    }

    return 0;
}
