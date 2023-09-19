#include <bits/stdc++.h>
#define Mod 1000000007
#define ll long long
using namespace std;
map<ll, ll> m;

ll fibo(ll n)
{
    if (m.count(n))
        return m[n];
    ll tmp = n / 2;
    if (!(n & 1))
    {
        return m[n] = (fibo(tmp) * fibo(tmp) + fibo(tmp - 1) * fibo(tmp - 1)) % Mod;
    }
    return m[n] = (fibo(tmp) * fibo(tmp + 1) + fibo(tmp - 1) * fibo(tmp)) % Mod;
}

void solve()
{
    ll n;
    cin >> n;
    cout << (n == 0 ? 0 : fibo(n - 1)) << endl;
}

int main()
{
   
    m[0] = m[1] = 1;
    int test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}