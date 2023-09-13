#include<bits/stdc++.h>
using namespace std;

long long s(long long x, long long n) {
    long long sum = 0;
    int j = 0;
    long long a = x;
    
    while (a != 0) {
        a = a / 10;
        j++;
    }
    
    long long power_of_10 = 1;
    
    for (long long i = 0; i < n; i++) {
        sum += x * power_of_10;
        power_of_10 *= 10;
    }
    
    return sum;
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    
    while (t--) {
        long long x, n, m;
        cin >> x >> n >> m;
        cout << s(x, n) % m << endl;
    }
    
    return 0;
}
