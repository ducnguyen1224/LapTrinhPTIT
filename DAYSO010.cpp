#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n , l;
        cin >> n >> l;
        ull Sum, Sum_try = 0;
        Sum = (ull)n * (2 * l + n - 1) / 2;
        for (int i = 0; i < n-1; i++){
            int a;
            cin >> a;
            Sum_try += a;
        }
        
        cout << Sum - Sum_try << endl;
    }
    
    return 0;
}
