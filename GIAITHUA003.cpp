#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll number(ll n)
{
    ll i = 5;
    ll count = 0;
    while (n / i >= 1)
    {
        count += n / i;
        i *= 5;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << number(n) << "\n";
    }
    return 0;
}