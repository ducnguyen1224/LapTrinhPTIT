#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n , k;
    string x ;
    cin >> n >> k >> x ;
    int num = bitset<50>(x).to_ulong();//Chuyển xâu nhị phân thành số nguyên
    int y = (num + k + 1) % (1 << n);// cộng k + 1 và lấy phần dư khi chia cho 2 ^n
    bitset<50>bs(y);// chuyển số nguyên thành xâu nhị phân
    string res = bs.to_string();
    res = res.substr(res.length()-n);//loại bỏ số 0 ở đầu
    cout << res;
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
