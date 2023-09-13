 
#include<bits/stdc++.h>
 
using namespace std;
 
int n,result=99999999, s=0, minz;
int a[20]={0};
int check[100]={0};
int x[20][20];
vector<int>b;
 
void in(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>x[i][j];
    }
}
 
void FindMin(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(x[i][j]!=0)
            b.push_back(x[i][j]);
        }
    }
    sort(b.begin(), b.end());
    minz=b[0];
}
 
void out(){
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
 
void Try( int i){
    for(int j=1;j<=n;j++){
        if(check[j]==0){
            a[i]=j;
            check[j]=1;
            s+=x[a[i-1]][a[i]];
            if(i==n-1){
                if(s+x[j][1]<result) result =s+x[j][1];
            }
            else if((s+(n-i)*minz)<result) Try(i+1);
            check[j]=0;
            s-=x[a[i-1]][a[i]];
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    in();
    check[1]=1;
    a[0]=1;
    Try(1);
    cout<<result;
    return 0;
}