#include <bits/stdc++.h>
using namespace std;
short int n;
short int a[15];
bool check[15] = { 0 };

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
        }
        else
        continue;

	    if (i < n)
		    Try(i + 1);
	    if (i == n)
	    {
		    for (short int h = 1; h <= n; h++)
			    cout << a[h] <<(h<n?" ":"\n");	
	    }
	    check[j] = 0;
    }
}
int main()
{
    int t;
	cin >> t;
	while(t--)
	{
        cin >> n;
        Try(1);
    }

    return 0;
}