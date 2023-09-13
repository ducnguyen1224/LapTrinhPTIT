#include <bits/stdc++.h>
using namespace std;
int t;
int n, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long d[500][500];
        memset(d, 0, sizeof(d));
        d[0][0] = 1;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= k; j++)
                for (int x = 1; x <= i; x++)
                    d[i][j] = d[i][j] + d[i - x][j - 1];
        cout << d[n][k] << "\n";
    }
    return 0;
}