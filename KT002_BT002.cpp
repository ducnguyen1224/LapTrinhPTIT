#include<bits/stdc++.h>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int fac(int n){
    if(n == 0 || n == 1){
        return 1 ;
    }
    return n * fac(n-1);
}

int cnt(vector<int>a, vector<int>b){
    int n = a.size();
    int count = 0 ;
    for(int i = 0 ; i < n ; ++i){
        int sml = 0 ;
        for(int j = i +1 ; j < n ; ++j){
            if(a[j] < a[i]){
                ++ sml;
            }
        }
        count += sml * fac(n-i-1);
    }
    for(int i = 0 ; i < n ; ++i){
        int sml = 0 ;
        for(int j = i + 1 ; j < n ; ++j){
            if(b[j] < b[i]){
                ++sml;
            }
        }
        count -= sml * fac(n-i-1);
    }
    return abs(count);
}

void implement(){
    int n;
    cin >> n ;
    vector<int>a(n);
    vector<int>b(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; ++i){
        cin>> b[i];
    }
    int res = cnt(a,b);
    cout << res ;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        implement();
        cout << endl;
    }
    return 0;
}