#include <bits/stdc++.h>
using namespace std;
int x, y, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int dem = 0;
        int tong = 0;
        cin >> x >> y >> m;
        while (m >= x)
        {
            m -= x;
            tong++;
            dem++;
            if (dem == y)//y(vo)=1 hop 
            {
                tong++;
                dem = 1;
            }
        }
        cout << tong << "\n";
    }
    return 0;
}