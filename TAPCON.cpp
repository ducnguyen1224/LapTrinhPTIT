#include <iostream>
using namespace std;
void sxtang(long long a[], long long n)
{
    long long i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a[40000], b[40000];
        cin >> n;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sxtang(a, n);
        for (long long i = 0; i < n; i++)
        {
            b[i] = 1;
        }
        long long j = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                b[j]++;
            }
            else
                j++;
        }
        long long count = 1;
        for (long long i = 0; i <= j; i++)
        {
            count *= (b[i] + 1);
        }
        cout << count - 1 << " [";
        for (long long i = 0; i < n; i++)
        {
            cout << a[i];
            if (i < n - 1)
                cout << ", ";
        }
        cout << "]";
        if (t != 0)
            cout << endl;
    }
}