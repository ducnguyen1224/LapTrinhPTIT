#include <bits/stdc++.h>
using namespace std;
int t;
int n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<long> d(n + 1, 0);
        d[0] = 1;
        for (int i = 0; pow(m, i) <= n; i++)
        {
            int q = pow(m, i);
            for (int j = q; j <= n; j++)
                d[j] = d[j] + d[j - q];
        }
        cout << d[n] << "\n";
    }
    return 0;
}