#include <bits/stdc++.h>
using namespace std;

bool NT(long long n){
	if (n<2) return false;
	for (long i=2 ; i <= sqrt(n); i++){
		if (n%i==0) return false;
	}
	return true;
}
int main (){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long count = 0;
		for (long  i = 1; i<=n;i++){
			if (n%i ==0 && NT(i)) count ++;
		}
		cout << count << endl;
	}
	return 0;
}