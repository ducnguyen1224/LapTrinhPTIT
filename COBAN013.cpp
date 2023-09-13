#include <bits/stdc++.h>
using namespace std;

const int MAX = 20000;

int main (){
	int t;
	cin >> t;
	while (t--){
		int arr[MAX];
		int n;
		cin >> n;
		int dem_am = 0;
		int dem_khong = 0;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			if (arr[i] == 0) dem_khong++;
			dem_am += (arr[i] < 0);
		}
		if (dem_khong > 0) cout << "-1" << endl;
		else{
			if (dem_am <= n/2) cout << dem_am << endl;
			else cout << n- dem_am << endl;
		}
	}
	return 0;
}