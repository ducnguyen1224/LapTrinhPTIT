#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >>t;
	while(t--){
		long long n, k, m, msd;
		double t;
		cin >>n>>k>>m;
		double y = (double)k*log10(n);
		y = y - ((long long) (y));
		t = pow(10,y);
		msd = t*pow(10,m-1);
		cout <<msd<<endl;
	}
	return 0;
}
