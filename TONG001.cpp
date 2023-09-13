#include<bits/stdc++.h>
using namespace std;

long long sumOdd(long long n) {
    long long terms = (n + 1) / 2;
    long long sum = terms * terms;
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long tong = sumOdd(r) - sumOdd(l - 1);
        cout << tong << endl;
    }
    return 0;
}
