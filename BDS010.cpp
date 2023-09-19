#include<iostream>
using namespace std;
int m = 1e9 + 7;
void multiply(long long F[2][2], long long M[2][2])
{
	long long x = F[0][0]%m * M[0][0]%m + F[0][1] * M[1][0]%m;
	long long y = F[0][0]%m * M[0][1]%m + F[0][1] * M[1][1]%m;
	long long z = F[1][0]%m * M[0][0]%m + F[1][1] * M[1][0]%m;
	long long w = F[1][0]%m * M[0][1]%m + F[1][1] * M[1][1]%m;

	F[0][0] = x%m;
	F[0][1] = y%m;
	F[1][0] = z%m;
	F[1][1] = w%m;
}

// Power function in log n
void power(long long F[2][2], long long n)
{
	if (n == 0 || n == 1)
		return;
	long long M[2][2] = { {1,1},{1,0} };

	power(F, n / 2);
	multiply(F, F);

	if (n % 2 != 0)
		multiply(F, M);
}

/* function that returns (n+1)th Fibonacci number
Or number of ways to represent n as sum of 1's
2's */
long long countWays(long long n)
{
	long long F[2][2] = { {1,1},{1,0} };
	if (n == 0)
		return 0;
	power(F, n);
	return F[0][0]%m;
}

// Driver program
int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		cout << countWays(n) << endl;
	}
	return 0;
}
