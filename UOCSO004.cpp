#include<bits/stdc++.h>

using namespace std;

void result(long long n)
{
	int dem = 0;
	long long m = n;
	long long tich = 1;
	while(n%2==0)
	{
		n/=2;
		dem++;
	}
	if(dem>1)
	{
		cout << "YES" << endl;
		return;
	}
	if(dem==1)
	{
		tich = 2;
	}
	int count;
	for(int i=3; i<=sqrt(n); i+=2)
	{
		count = 0;
		while(n%i==0)
		{
			n /= i;
			count++;
		}
		if(count > 1)
		{
			cout << "YES" << endl;
			return;
		}
		if(count == 1)
		{
			tich *= i;
		}
	}
	if(n>1)
	tich*=n;
	if(tich>=m)
	{
		cout << "NO";
	}
	else
	cout << "YES";
	cout << endl;
	
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		result(n);
	}
	return 0;
}