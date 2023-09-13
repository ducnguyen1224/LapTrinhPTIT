#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll arr[10] = {0};

void Run(ll n)
{
    ll temp = 0;
    while (n > 0)
    {
        temp = n % 10;
        arr[temp]++;
        n /= 10;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (a > b)
        {
            ll c = a;
            a = b;
            b = c;
        }
                if (a == 0)
            arr[0] += 1;
        ll temp = 0;
        for (ll i = a; i <= b; i++)
        {
            Run(i);
        }
        for (ll i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
            arr[i] = 0;
        }
        cout << endl;
    }
}