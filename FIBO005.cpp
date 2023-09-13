#include <bits/stdc++.h>
using namespace std;
 
long long fib[101], dp1[101];
long long dp2[101], v[101];
 
// Ham tao so Fibonacci
void fibonacci()
{
    // hai so fibonacci dau tien
    fib[1] = 1;
    fib[2] = 2;
 
    for (int i = 3; i <= 87; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
 
// Ham tim toi da so cách bieu dien
int tim_kiem(int num)
{
    int cnt = 0;
 
    for (int i = 87; i > 0; i--) {
        if (num >= fib[i]) {
            v[cnt++] = i;
            num -= fib[i];
        }
    }
 
    // Dao nguoc so
    reverse(v, v + cnt);
 
    // Dieu kien co ban cua dp1 va dp2
    dp1[0] = 1;
    dp2[0] = (v[0] - 1) / 2;

    for (int i = 1; i < cnt; i++) {
 
        // Tinh dp1[]
        dp1[i] = dp1[i - 1] + dp2[i - 1];
 
        // Tinh dp2[]
        dp2[i] = ((v[i] - v[i - 1]) / 2) * dp2[i - 1] + ((v[i] - v[i - 1] - 1) / 2) * dp1[i - 1];
    }
 
    return (dp1[cnt - 1] + dp2[cnt - 1]);
}
 

int main(){
	int t;
	cin >> t;
	while (t--){
		fibonacci();
		int n;
		cin >> n;
		cout << tim_kiem(n) << endl;
	}
	return 0;
}