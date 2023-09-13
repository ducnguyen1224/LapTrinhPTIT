#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        float ans=0;
        float n, x;
        cin>>n>>x;
        for(float k=1; k<=n; k++){
            ans+=pow(x, k)/((k*(k+1))/2);
        }
        printf("%.3f\n", ans);
    }
}