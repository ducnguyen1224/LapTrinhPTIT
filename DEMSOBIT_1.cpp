#include<bits/stdc++.h>

using namespace std;
vector<long long >a;
void Poscenter(long long n){
    int t =0;
    long long mu =1;
while(n/2>0){
    t++;
    if(t==1){
        a.push_back(2);
        mu=2;

    }else {
        mu *=2;
        a.push_back(mu);
    }
    n/=2;
}

}
long long val(long long k,long long n,long long pos){
    if(k%2==1)
    return 1;
    if(k<a[pos])
    val(k,n/2,pos-1);
    else if (k==a[pos]) return n%2;
    else if(k>a[pos] )val(2*a[pos]-k,n/2,pos-1);
}
int main (){
    ios_base ::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--){
    long long n,l,r,res=0;
    a.clear();
    cin>>n>>l>>r;
    Poscenter(n);
    for(int i=l;i<=r;i++){
        res+= val(i,n,a.size()-1);
    }
    cout<<res<<endl;
}
    return 0;
}