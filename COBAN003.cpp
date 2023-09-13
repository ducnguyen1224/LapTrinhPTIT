#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while (t--){
		long long a,b;
		cin >> a >> b;
		if (a>b) swap (a,b);
		long long start  = sqrt(a);
		start = (start * start == a)? start : start+1;
		long long end = sqrt(b);
		int count = 0;
		for (long i = start; i<=end; i++){
		count ++;
	}
		cout << count << endl;
	}
	return 0;
}