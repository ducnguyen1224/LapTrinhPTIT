#include <bits/stdc++.h>
using namespace std; 
string s[100005];
void giaithua(int n){
 int a[500005],m=1;
 long long r=0,q;
 a[0] = 2;
 for(int i=2;i<=n;i++){
  for(int j=0;j<m;j++){
   q=r;
   r = (a[j]*i*2+r)/10;
   a[j] = (a[j]*i*2+q)%10;
  }
  while(r>0){
   a[m] = r%10;
   m++;
   r/=10;
  }
  for(int p=m-1;p>=0;p--){
   s[i]+=char(a[p]+'0');
  }
 }
}
int main(){ 
 giaithua(10005);
 int tc;cin>>tc;
 while(tc--){
  int n;cin>>n;
  if(n==0){
            cout<<"1";
        }
        else if(n==1){
            cout<<"2";
        }
  else{
   cout << s[n];
  }
  cout << endl;
 }
}