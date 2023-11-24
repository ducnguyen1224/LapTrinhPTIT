#include <bits/stdc++.h>
using namespace std;
int count_prime(int n, int k, int first, vector<int> &prime)
{
    if (k == 0)
    {
        if (n == 0)
            return 1;
        return 0;
    }
    int way = 0;
    for (int i = first; i < prime.size(); ++i)
        if (prime[i] <= n)
        {
            way += count_prime(n - prime[i], k - 1, i + 1, prime);
        }
    return way;
}
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
        vector<bool> is_prime(n + 1, true);
        vector<int> prime;
        for (int i = 2; i * i <= n; ++i)
        {
            if (is_prime[i])
            {
                for (int j = i * 2; j <= n; j += i)
                {
                    is_prime[j] = false;
                }
            }
        }
        for (int i = 2; i <= n; ++i)
        {
            if (is_prime[i])
                prime.push_back(i);
        }
        cout << count_prime(n, k, 0, prime) << "\n";
    }
    return 0;
}