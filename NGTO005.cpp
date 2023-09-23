#include <bits/stdc++.h>
using namespace std;

long long ketQua (long long n){
	int prime[n+1];
    long long sum = 0;
	memset (prime, 0, sizeof(prime));
	
	long long max = n/2;
	for (long long p = 2; p <= max; p++){
		if (prime[p] == 0){
			for (long long i = p*2; i <= n; i+=p)
				prime[i] = p;
		}
	}
	
	for (long long p = 2; p <= n; p++){
		if (prime[p])
			sum += prime[p];
		else
			sum += p;
	}
	return sum;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		cout << ketQua(n) << endl;
	}
	return 0;
}