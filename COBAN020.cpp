#include<bits/stdc++.h>
using namespace std;
unsigned long long max_1(unsigned long long N){
    int max =0;
    if(N==0)
    return 1;
    if(N<10)
    return N;
    return max(max_1(N/10)*(n%10),max_1(N/10 -1)*9);

}
int main (){
int t;
cin>>t;
while(t--){
    unsigned long long n;
    cin>>n;
    cout<<max_1(n)<<endl;
}
    return 0;
}