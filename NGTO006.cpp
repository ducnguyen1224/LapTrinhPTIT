#include <bits/stdc++.h>
using namespace std;
const int maxn = 100001;

int gpf[maxn];
void uoc_nguyen_to (){
	memset (gpf, 0, sizeof(gpf));
	gpf[0] = 0;
	gpf[1] = 1;
	for (int i = 2; i < maxn; i++){
		if (gpf[i] > 0)
			continue;
		for (int j = i; j < maxn; j+=i){
			gpf[j] = max(i, gpf[j]);
		}
	}
}

int greatestValInt (int n){
	uoc_nguyen_to();
	
	for (int i = n; i > 0; i--){
		if (gpf[i] > sqrt(i))
			return i;
	}
	return -1;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << greatestValInt(n) << endl;
	}
	return 0;
}