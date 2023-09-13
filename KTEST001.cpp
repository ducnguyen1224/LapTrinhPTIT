#include<iostream>
using namespace std;
void giathua(int n,int k){
int i,j,m=1,x[40000];
long long r=0,s;
x[0]=1;
for ( i = n -k+1;i<=n;i++){
    for(int j=0;j<m;j++){
        s=x[j]*i+r;
        x[j]=s%10000;
        r=s/10000;
    }
    while (r>0){
        x[m++]=r%10000;
        r/=10000;
    }
}
for( i=m-1;i>=0;i--){
    if(i<m-1 && x[i]<1000)
    cout<<"0";
    if(i<m-1 && x[i]<100)
    cout<<"0";
    else cout<<x[i];
}
cout<<endl;
}
int main (){
    int test;
    cin>>test;
    while (test--){
        int  n,k;
        cin>>n>>k;
        giathua(n,k);
    }
    return 0;
}