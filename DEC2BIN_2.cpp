#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
	long long n;
	cin >> n;
	int i =0;
	int a[MAX];
	while(n)
	{
		if(n%2==0)
		{
			a[i] = 0;
		}
		else
		a[i] = 1;
		
		n /= 2;
		i++;
	}
	for(int j=i-1; j>=0; j--)
	{
		cout << a[j];
	}
	cout << endl;
}
	return 0;}