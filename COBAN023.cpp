#include <bits/stdc++.h>
using namespace std;
 
long long findPowerPrime(long long fact, long long p)
{
    long long res = 0;
    while (fact > 0) {
        res += fact / p;
        fact /= p;
    }
 
    return res;
}
 
long long findPowerComposite(long long fact, long long n)
{
    long long res = INT_MAX;
 
    for (long long i = 2; i <= sqrt(n); i++) {
 
        long long count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
 
        if (count > 0) {
 
            long long curr_pow = findPowerPrime(fact, i) / count;
            res = min(res, curr_pow);
        }
    }
 
    if (n >= 2) {
        long long curr_pow = findPowerPrime(fact, n);
        res = min(res, curr_pow);
    }
 
    return res;
}
 
// Driver code
int main()
{	
	int t;
	cin >> t;
	while (t--){
    long long fact, n;
    cin >> fact >> n;
    cout << findPowerComposite(fact, n) << endl;
	}
    return 0;
}