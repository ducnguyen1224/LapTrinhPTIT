#include<bits/stdc++.h>
using namespace std;

int powMod(int a, int p){
	if(p == 1) return a % 29;
	int x = powMod(a, p >> 1);
	x = (x * x) % 29;
	if(p & 1) return (x * a) % 29;
	return x;
}

int cnt[2004];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		long long power;
		cin >> power;
		if(power == 0) break;
		int x = 2004;
		memset(cnt, 0, sizeof(cnt));
		for(int i = 2; i <= x; ++i)
			while(x % i == 0){
				cnt[i] += power;
				x /= i;
			}
		int ans = 1;
		for(int i = 2; i < 2004; ++i){
			if(cnt[i]){
				ans = (ans * (powMod(i, cnt[i] + 1) + 28)) % 29;//
				ans = (ans * powMod(i - 1, 27)) % 29;
			}
		}
		cout << ans << endl;
	}
	return 0;
}