#include<bits/stdc++.h>
using namespace std;
void check (int a[],int n,int k){
bool b[n+1];
memset(b,false,sizeof(b));
for(int i=1;i<=n;i++){
    if(b[i]==false && i+k<=n){
        b[i]=true;
        b[i+k]=true;
        swap(a[i],a[i+k]);
    }
    if(i+k>n && b[i]==false){
        cout<<-1;
        return ;
    }
}
for(int i=1;i<=n;i++){
    if(b[i]==true ){
        cout<<a[i]<<" ";
    }
}
}
int main (){
int t;
cin >>t;
while (t--)
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
        a[i]=i;}
        check(a,n,k);
        cout<<endl;
    
}
return 0;
}