#include <iostream>
using namespace std;

long long countWays(long long n) {
    long long count = 0;
    long long i = 1;

    while (i * (i + 1) / 2 < n) {
        long long remainder = n - i * (i + 1) / 2;
        if (remainder % (i + 1) == 0) {
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;
        long long ways = countWays(N);
        cout << ways << endl;
    }

    return 0;
}
