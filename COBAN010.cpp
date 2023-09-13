#include <bits/stdc++.h>
const int Mod = 1e9 + 7;
using namespace std;

long long mod (string a, int Mod){
	long long r = 0;
	for (int i = 0; i < a.size(); i++){
		r = r * 10 + a[i] - '0';
		r %= Mod;
	}
	return r;
}

long long power (long long a, long long b){
	long long res = 1;
	while (b){
		if (b % 2 == 1){
			res *= a;
			res %= Mod; 
		}
		a *= a;
		a %= Mod;
		b  /= 2;
	}
	return res;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		string a, b;
		cin >> a >> b;
		long long numA = mod(a, Mod);
		long long numB = mod(b, Mod - 1);
		long long result = power(numA, numB) % Mod;
		cout << result << endl;
	}
	return 0;
}