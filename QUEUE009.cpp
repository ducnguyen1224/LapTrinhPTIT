//ĐẢO CHỖ K PHẦN TỬ TRONG HÀNG ĐỢI
#include<bits/stdc++.h>
using namespace std ;
#define int long long

vector<string>rev(vector<string>vt, int k){
    queue<string>q;
    int n = vt.size();
    for(int i = k - 1 ; i >= 0 ; --i){
        q.push(vt[i]);
    }
    for(int i = k ; i < n; ++i ){
        q.push(vt[i]);
    }
    vector<string>res;
    while(!q.empty()){
        res.push_back(q.front());
        q.pop();
    }
    return res;
}
void implement(){
    string s ; int k ;
    cin >> s >> k;
    vector<string>vt;
    size_t pos = 0 ;
    string token;
    while((pos = s.find(',')) != string::npos){
        token = s.substr(0,pos);
        vt.push_back(token);
        s.erase(0,pos+1);
    }
    vt.push_back(s);
    vector<string> res = rev(vt , k);
    for(int i = 0 ; i < res.size() ; ++i){
        cout << res[i];
        if(i < res.size() - 1){
            cout << ",";
        }
    }
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