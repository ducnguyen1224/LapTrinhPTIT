#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){  int n ,i;
    float x , s, t ;
    unsigned long long m ;
   cin >> n ;
        m = 1;
        i = 2;
        s = 1.0;
        while(i <= n){
            m = m * i ;
            ++ i ;
            t = 1.0/i;
            s += m;
            s = pow(s,t);
        }
   
    cout << fixed << setprecision(3) << s << " " << endl;

        
    }
    return 0;
}