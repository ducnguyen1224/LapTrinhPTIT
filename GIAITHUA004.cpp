#include <bits/stdc++.h>
using namespace std;

// Tra ve gia tri cua nCk % p
int nCrModp(int n, int k, int m)
{
	//Doi voi cac truong hop r lon
	if (k > n - k)
		k = n - k;

	// Mang luu tru hang cuoi cung cua tam giac Pascal
	// muc cuoi cung cua hang cuoi cung la nCk
	int C[k + 1];
	memset(C, 0, sizeof(C));

	C[0] = 1; // Ham tren cung cua tam giac Pascal

	// Tu tren xuong
	for (int i = 1; i <= n; i++) {
		// dien vao muc tiep theo bang gia tri hang truoc do
		for (int j = min(i, k); j > 0; j--)
			// nCj = (n-1)Cj + (n-1)C(j-1);
			C[j] = (C[j] + C[j - 1]) % m;
	}
	return C[k];
}

// Driver program
int main()
{
	int t;
	cin >> t;
	while (t--){
		int n, k, m;
		cin >> n >> k >> m;
		cout << nCrModp(n, k, m) << endl;
	}
	return 0;
}