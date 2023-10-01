#include <bits/stdc++.h>
using namespace std;
int N;
struct mt
{
    long long c[11][11];
};
int m = 1e9 + 7;
mt operator*(mt a, mt b)
{
    mt res;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            res.c[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]) % m;
            }
        }
    }
    return res;
}
mt POW(mt a, long long k)
{
    if (k == 1)
        return a;
    if (k % 2 != 0)
        return POW(a, k - 1) * a;
    mt x = POW(a, k / 2);
    return x * x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long long k;
    while (t--)
    {
        cin >> N >> k;
        mt a;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> a.c[i][j];
            }
        }
        mt b;
        b = POW(a, k);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << b.c[i][j] << " ";
            }
            cout << endl;
        }
    }
}