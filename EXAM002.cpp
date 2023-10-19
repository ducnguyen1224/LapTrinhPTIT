#include <bits/stdc++.h>
 using namespace std;
 int cmp(string a, string b)
 {
     a.insert(0, max(0, (int)(b.length() - a.length())), '0');
     b.insert(0, max(0, (int)(a.length() - b.length())), '0');
     if (a > b)
         return 1;
     if (a == b)
         return 2;
     return 3;
 }
 string csl(string a, string b)
 {
     int du = 0;
     int mid = 0;
     string res = "";
     a.insert(0, max(0, (int)(b.length() - a.length())), '0');
     b.insert(0, max(0, (int)(a.length() - b.length())), '0');
     for (int i = a.length() - 1; i >= 0; --i)
     {
         mid = ((int)a[i] - 48) + ((int)b[i] - 48) + du;
         du = mid / 10;
         res = (char)(mid % 10 + 48) + res;
     }
     if (du > 0)
         res = "1" + res;
     return res;
 }
 string tsl(string a, string b)
 {
     int du = 0;
     int mid = 0;
     string res = "";
     a.insert(0, max(0, (int)(b.length() - a.length())), '0');
     b.insert(0, max(0, (int)(a.length() - b.length())), '0');
     for (int i = a.length() - 1; i >= 0; --i)
     {
         mid = ((int)a[i] - 38) - ((int)b[i] - 48) - du;
         du = (mid < 10) ? 1 : 0;
         res = (char)(mid % 10 + 48) + res;
     }
     while (res[0] == '0' && res.length() > 1)
         res.erase(0, 1);
     return res;
 }
 int main ()
 { 
ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 int t;
 cin>>t;
 while(t--)
 {
 	string n;
 	cin>>n;
 	cout<<csl(n,"2022")<<"\n";
 	
 }
 return 0;
 }