#include <bits/stdc++.h>
using namespace std;
#define uint unsigned int

//tao mot ham min 
int min2(int a, int b)
{
	if(a <= b)
	{
		return a;
	}
	return b;
}

int result(uint k, uint s)
{
	int count = 0;

	//Neu s = 3k thi chi co 1 cach
	if(s == 3*k)
	{
		return 1;
	}

	//uint la kieu nguyen duong, khi am se ra so duong lon, mac dinh lon hon k
	//duyet 2 mang 
	for(int i = 0; i <= k; i ++)
	{
		int min = min2(k, s-i);//
		for(int j = 0; j <= min; j ++)
		{
			uint n = s - i - j;
			if(n <= k)
			{
				count ++;
			}
		}
	}


	return count;
}

int main() 
{     ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
    int test;
	cin >> test;
	while(test--)
	{
		int k, s;
		cin >> k >> s;
		cout << result(k, s) << endl;
	}
	return 0;
}