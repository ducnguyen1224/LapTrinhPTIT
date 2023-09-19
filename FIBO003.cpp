#include <bits/stdc++.h>
using namespace std;
// kiem tra SCP
bool isSCP (int x){
	int s = sqrt(x);
	return (s*s == x);
}

// Ham kiem tra so Fibonacci
bool isFibonacci (int N){
	return isSCP(5 * N * N + 4) || isSCP(5 * N * N - 4);
}

// Ham tim so Non - Fibo ke tiep
int nextNonFibonacci (int N){
	if (N < 3) 
		return 4;
	if (isFibonacci(N + 1))
		return (N + 2);
	else
		return (N + 1);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int N;
		cin >> N;
		cout << nextNonFibonacci(N) << endl;
	}
	return 0;
}