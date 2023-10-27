// CPP program to count number of
// ways we can express a factorial
// as sum of consecutive numbers
#include <bits/stdc++.h>
using namespace std;

#define MAX 50002

vector<int> primes;

// sieve of Eratosthenes to compute
// the prime numbers
void sieve()
{
	bool isPrime[MAX];
	memset(isPrime, true, sizeof(isPrime));

	for (int p = 2; p * p < MAX; p++) {
		if (isPrime[p] == true) {
			for (int i = p * 2; i < MAX; i += p)
				isPrime[i] = false;
		}
	}

	// Store all prime numbers
	for (int p = 2; p < MAX; p++)
		if (isPrime[p])
			primes.push_back(p);
}

// function to calculate the largest
// power of a prime in a number
long long int power(long long int x,
					long long int y)
{
	long long int count = 0;
	long long int z = y;
	while (x >= z) {
		count += (x / z);
		z *= y;
	}
	return count;
}

// Modular multiplication to avoid
// the overflow of multiplication
// Please see below for details
// https://www.geeksforgeeks.org/how-to-avoid-overflow-in-modular-multiplication/
long long int modMult(long long int a,
					long long int b,
					long long int mod)
{
	long long int res = 0;
	a = a % mod;
	while (b > 0) {
		if (b % 2 == 1)
			res = (res + a) % mod;
		a = (a * 2) % mod;
		b /= 2;
	}
	return res % mod;
}

// Returns count of ways to express n!
// as sum of consecutives.
long long int countWays(long long int n,
						long long int m)
{
	long long int ans = 1;

	// We skip 2 (First prime) as we need to
	// consider only odd primes
	for (int i = 1; i < primes.size(); i++) {

		// compute the largest power of prime
		long long int powers = power(n, primes[i]);

		// if the power of current prime number
		// is zero in N!, power of primes greater
		// than current prime number will also
		// be zero, so break out from the loop
		if (powers == 0)
			break;

		// multiply the result at every step
		ans = modMult(ans, powers + 1, m) % m;
	}

	// subtract 1 to exclude the case of 1
	// being an odd divisor
	if (((ans - 1) % m) < 0)
		return (ans - 1 + m) % m;
	else
		return (ans - 1) % m;
}

// Driver Code
int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--){
	long long int n , m ;
	cin>>n>>m;
	cout << countWays(n, m)<<"\n";
}
	return 0;
}
