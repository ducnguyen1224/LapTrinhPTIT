#include <bits/stdc++.h>
#define min INT_MIN
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int arr[n + 10][m + 10];
		for (int i = 1; i <= n; i++) {
			arr[i][0] = min;
			arr[i][m + 1] = min;
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 2; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				arr[i][j] += max(arr[i - 1][j - 1], max(arr[i - 1][j], arr[i - 1][j + 1]));
			}
		}

		int ketQua = min;
		for (int j = 1; j <= m; j++) {
			if (ketQua < arr[n][j])
				ketQua = arr[n][j];
		}
		cout << ketQua << endl;
	}
	return 0;
}

