#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >>t;
	while (t--) {
		long long n;
		int s=1;
		cin >>n;
		if (n==1) cout <<"0" <<endl; else {
			for (int i=2; i<sqrt(n); ++i)
			if (n%i==0) {
                s+=i;
                s+=n/i;
            }
			int x = sqrt(n);
        	if (x*x==n) s+=x;
			cout <<s <<endl;
		}
	}
return 0;
}
