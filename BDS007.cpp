#include <iostream>
#include<cmath>
using namespace std;
int numberOfWays(int n, int k)
{

	// Base Cases
	if (n == 0)
		return 1;

	if (k == 0)
		return 1;

	// Check if 2^k can be used as
	// one of the numbers or not
	if (n >= pow(2, k)) {
		int curr_val = pow(2, k);
		return numberOfWays(n - curr_val, k)
			+ numberOfWays(n, k - 1);
	}
	// Otherwise
	else

		// Count number of ways to
		// N using 2 ^ k - 1
		return numberOfWays(n, k - 1);
}

// Driver Code
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int k = log2(n);

		cout << numberOfWays(n, k) << endl;
	}
}
