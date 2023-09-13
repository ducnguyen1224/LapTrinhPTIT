#include<iostream>
#include<cmath>
using namespace std;
int snt[500],len,n,k,dem;
bool check(int a) {
	if (a < 2) return false;
	for (int i = 2; i <= sqrt(a); i++) if (a % i == 0) return false;
	return true;
}
void up(int x, int sum, int t) {
	for (int i = x; i < len; i++) {
		sum += snt[i];
		if (sum == n && t==k-1) dem++;
		else {
			if (sum < n && t < k - 1) up(i + 1, sum, t + 1);
			if(sum>n) break;
		}
		sum -= snt[i];
	}
}
int main() {
	len = 0;
	for (int i = 2; i < 500; i++) {
		if (check(i)) {
			snt[len++] = i;
		}
	}
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		dem = 0;
		up(0, 0, 0);
		cout << dem << endl;
	}
}
