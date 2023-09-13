#include<iostream>
using namespace std;
 
int tinhtong(int n) 
{  
    int sum = 1; 
    for ( int i=2; i*i < n; i++) // 2 
    { 
        if (n%i==0) 
        { 
            if(i*i != n)
                sum = sum + i + n/i; 
            else
                sum = sum + i; 
        } 
    }   
    return sum;
} 
int main()
{
	int T,n;
	cin >> T;
	while(T--)
	{
		cin >> n;
	    if(tinhtong(n) == n && n != 1 )
	         cout << "1" << endl;
	    else cout << "0" << endl;
	}
	return 0;
}