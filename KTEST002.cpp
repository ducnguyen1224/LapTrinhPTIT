#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[110][110];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int x, y;
        cin >> x >> y;
        for (int j = 0; j <= m; j++)
        {
            a[0][j] = 99999;
            a[n + 1][j] = 99999;
        }
        for (int j = m - 2; j >= 0; j--)
        {
            for (int i = 1; i < n + 1; i++)
            {
                a[i][j] += min(a[i][j + 1], min(a[i + 1][j + 1], a[i - 1][j + 1]));
            }
        }
        cout << a[x][y - 1] << endl;
    }
}