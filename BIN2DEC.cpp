#include <bits/stdc++.h>
using namespace std;

long long he_co_so_10 (string s){
	string num = s;
	long long value = 0;
	long long base = 1;
	for (int i = num.length() - 1; i >= 0; i--){
		if (num[i] == '1')
		value += base;
		base *= 2;
	}
	return value;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		cout << he_co_so_10(s) << endl;
	}
	return 0;
}