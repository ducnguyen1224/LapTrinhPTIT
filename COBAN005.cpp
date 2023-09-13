#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;


long long real(string a, long long n){
	long long mod = 0;
	for(int i = 0; i< a.size();i++){
		mod = (mod*10 + a[i]-'0') % n;
	}
	return mod;
}

int main()
{
	int t; cin >> t;
	while(t--){
		string a,b;
		cin >>a>>b;
		long long mod1 = real(a,MOD);
	long long mod2 = real(b,MOD-1);
	long long c = 1;
	while(mod2){
		if(mod2%2 == 1){
			c = c*mod1;
			c = c%MOD;
		}
		mod1*=mod1;
		mod1%= MOD;
		mod2/=2;
	}
		cout <<c<<endl;
	}
	return 0;
}