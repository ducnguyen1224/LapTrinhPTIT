#include <cstdio>
#include <bits/stdc++.h>
#include <string>

using namespace std;

string s;
int main()
{
  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	long long n;
    while (cin>>n)
    if (n>0)
    {
        s="";
        long long d=0;
        string s1="";
        while (n!=0)
        {   
            int du=n%26;
            n/=26;
            du=du-d;
            if (n==0 && du<=0) break;
            if (du<=0) 
            {
                du+=26; 
                d=1;
            }
        s1=char(du+64);
        s=s1+s;
        }

        cout<<s;
        cout<<endl;
    }
    
}