#include <bits/stdc++.h>
using namespace std;
int bin[100];

int main () {
	int t;
	cin >>t;
	while (t--) {
		long long n;
		cin >>n;
		int i=0;
		while (n) {
			bin[i]=n%2;
			n=n/2;
			i++;
		}
		for (int j=i-1; j>=0; j--) cout <<bin[j];
		cout <<endl;
	}
	return 0;
}
