#include<bits/stdc++.h>
using namespace std;
#define MOD 10000
void hienthi(int S[], int sopt)
{
	for(int i = sopt - 1; i >= 0; i--)
	{	
		if(i < sopt - 1 && MOD > 10 && S[i] < 1000)	cout << "0";
		if(i < sopt - 1 && MOD > 10 && S[i] < 100) cout << "0";
		if(i < sopt - 1 && MOD > 10 && S[i] < 10)cout << "0";
		cout << S[i];
	}
	cout << endl;
}
void nhanso(int S[], int &sopt, int x)
{
	int nho = 0;
	for(int i = 0; i < sopt; i++)
	{
		nho = S[i] * x + nho;
		S[i] = nho % MOD;
		nho = nho/MOD;
	}
	while(nho > 0)
	{
		S[sopt++] = nho%MOD;
		nho = nho/MOD;
	}
}
void giaithua(int n)
{
	int S[100000], sopt = 1;
	S[0] = 1;
	for(int i = 2; i <= n; i++)
	{
		nhanso(S, sopt, i);
	}
	hienthi(S, sopt);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		giaithua(n);
	}
}
