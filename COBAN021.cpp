
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int n, cs, a , m , key[100005], mx, t,gt, ans , test[100005];
int tinh(int x){
    int ans = 1 ;
    while(x) ans *= (x % 10), x /= 10 ;
    return ans;
}
void implement(){

    cin >> n;
    if(n < 1000){
        cout << tinh(key[n]);
        return ;
    }
    m = n , cs = 0, ans = 1;
    while(m){
        cs ++;
        m/= 10;
    }
    a = n;
    for(int i = 1 ; i <= cs-3; ++i){
        a/=10;
    }
    m = a;
    for(int i = 1; i <= cs - 3; ++i){
        m = m*10 + 9;
    }
    if(m == n) m = key[a];
    else m = key[a-1];
    for(int i = 1 ; i <= cs-3; ++i){
        m = m*10 + 9;
    }
    cout << tinh(m);
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for(int i = 1 ; i <= 1e3; i++){
        if(tinh(i) > mx) mx = tinh(i), gt = i ;
        key[i] = gt;
    }
    int t; cin >> t;
    while(t--){
        implement();
        cout << endl;
    }
    return 0;
}