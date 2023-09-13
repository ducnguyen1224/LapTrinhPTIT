#include<bits/stdc++.h>
#define mod 1000000007;
using namespace std;
void batdau(){
    int n;
    cin>>n;
    int d[100001];
    memset(d,0,sizeof(d));
    d[0]=1;
    for (int i=1;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            d[j]=(d[j]+d[j-i])%mod;

        }
    }int x=d[n] % mod;
    cout<<x ;
    cout<<endl;
 }
int main(){
    int t;
    cin>>t;
    while (t--)
    {
      batdau();
    }
    

    return 0;
}