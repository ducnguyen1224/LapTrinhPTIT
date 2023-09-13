#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;

const double PI = acos(-1.0);
const double e = 2.71828183;

ll nDig(int x) {
    if (x <= 3) return 1;
    return (ll) (1. + floor(log10(x*PI*2)/2 + log10(x/e) * x));
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        ll k; cin >> k;

        int Left, Right, l, r;

        // Left
        l = 0, r = 1000111000; Left = r;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (nDig(mid) >= k) {
                Left = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        // Right
        l = 0, r = 1000111000; Right = l;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (nDig(mid) <= k) {
                Right = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        if (nDig(Left) != k) {
            puts("NO");
        }
        else {
			cout << Right - Left + 1 <<  " ";
        	FOR(i,Left,Right) cout << i <<" ";
            cout << endl ;
		}
    }
    return 0 ;
}