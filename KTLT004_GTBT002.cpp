#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long


void implement(){
    int n ,i;
    float x , s, t ;
    unsigned long long m ;
     cin >> n ;
        cin >> x ;
        s = 0.0;
        t = 1.0; 
        m = 1;
        i = 1;
        while(i <= n){
            t = t * x;
            m = m * i ;
            s += t/m;
            i ++;
        }
    cout << fixed << setprecision(3) << s << " " << endl;

}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        implement();
    }
    return 0;
}