#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
ull change (string s, int n){
    ull sum = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '1')
            sum |= 1 << (n - 1 - i);
    }
    return sum;
}
ull print (string a, string b , int n){
    ull aa = change (a, n);
    ull bb = change (b, n);
    if (aa == bb)
        return 0;
    return (aa > bb) ? (aa - bb - 1) : (bb - aa -1);
}
int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        string x, y;
        cin >> n >> x >> y;
        cout << print (x , y, n) << endl;
    }
    return 0;}