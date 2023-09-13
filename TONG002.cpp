#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >>t;
	while (t--) {
		long long l, r, ssh;
		cin >>l >>r;
		long long s=0;
		ssh=(r-l)+1;
		s=(r+l)*ssh/2;
		cout <<s<<endl;
	}
return 0;
}
