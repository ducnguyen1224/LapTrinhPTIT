#include <bits/stdc++.h>
using namespace std;

void chuyen_sang_Hexa(long long n){
	char hexaDecinum[500];
	
	long long i = 0;
	if (n == 0) cout << "0" << endl;
	else{
	while (n != 0){
		long long temp = 0;
		temp = n%16;
		if (temp < 10){
			hexaDecinum[i] = temp +48;
			i++;
		}
		else{
			hexaDecinum[i] = temp + 55;
			i++;
		}
		n = n/16;
	}
	for (long long j = i-1; j >= 0; j--){
		cout << hexaDecinum[j];
	}
	cout << endl;
}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		chuyen_sang_Hexa(n);
	}
	return 0;
}