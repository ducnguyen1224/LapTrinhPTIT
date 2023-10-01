#include <bits/stdc++.h>
using namespace std;

unsigned long int he_so_nhi_thuc (unsigned int n, unsigned k){
	unsigned long int res = 1;
	if (k > n-k)
		k = n - k;
	for (int i = 0; i < k; ++i){
		res *= (n-i);
		res /= (i+1);
	}
	return res;
}

// Tim so Catalan thu n bang su dung he so nhi thuc

unsigned long int Catalan (unsigned int n){
	
	unsigned long int tmp = he_so_nhi_thuc(2*n, n);
	
	return tmp / (n + 1);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << Catalan(n) << endl;
	}
	return 0;
}