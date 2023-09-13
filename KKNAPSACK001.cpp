#include <bits/stdc++.h>
using namespace std;
int t;
int n, w;//gioi han cai tui 
int a[100];
int c[100];
int d[10001][10001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> w;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> c[i];
        for (int j = 1; j <= w; j++)//khoi tao bien 
            d[0][j] = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 0; j <= w; j++)
            {
                d[i][j] = d[i - 1][j];
                if (j >= a[i])
                    d[i][j] = max(d[i][j], d[i - 1][j - a[i]] + c[i]);
            }
        cout << d[n][w] << "\n";
    }
    return 0;
}//ok 