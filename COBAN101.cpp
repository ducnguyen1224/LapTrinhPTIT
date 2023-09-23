#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int arr[10] = {0};
       long long  a, b;
        cin >> a >> b;
        if (a > b)// a= 1 va b = 0
        {
            int c = a;
           a=b;
            b=c;
        }
        if (a == 0)//neu a = 0 se dua len 1 don vi 
        {
            arr[0]++;
        }
        for (int i = a; i <= b; i++)
        {

            long long  t1 = i;
            while (t1 > 0)
            {
                int temp = t1 % 10;
                arr[temp]++;
                t1 /= 10;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
            arr[i] = 0;
        }
            
        cout << endl;
    }
}