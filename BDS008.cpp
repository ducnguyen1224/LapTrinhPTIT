#include<iostream>
using namespace std;

const int MOD = 1e9 + 7;
int kiemtra(int x, unsigned long y, int p)
{
    int res = 1;

    x = x % p;

    while (y > 0)
    {

        if (y & 1)
            res = (1LL * res * x) % p;


        y = y>>1;
        x = (1LL * x * x) % p;
    }
    return res;
}

long giatri(long n)
{
    return kiemtra(2, n/2 - 1, MOD);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        if(n%2!=0) cout<<-1<<endl;
        else
            cout<<giatri(n)<<endl;
    }
}
