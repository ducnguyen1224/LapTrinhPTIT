#include <bits/stdc++.h>
using namespace std;

vector <vector<int> > ketqua;

void deQuy(int i, int s, int n, vector <int> x){
	if (i > n || s > n)
	return;
	if (s==n){
	ketqua.push_back(x);
	return;
	}
	
	for (int k = i; k < n; k++){
		if (s * k > n)
		return;
		if (n%k==0){
			x.push_back(k);
			// Lay k roi thi nhan k vao s
			deQuy(k, s*k, n, x);
			// lay phan tu vao thì  day phan tu 0 o dau ra
			// tranh sai kich thuoc mang
			x.pop_back();
		}	
	}
}

void phanTich (int n){
	vector <int> x;
	x.clear();
	deQuy(2, 1, n , x);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		//Tim nghiem luu vao vector ket qua
		ketqua.clear();
		phanTich(n);
		cout << ketqua.size() << endl;
		for (int i = 0; i < ketqua.size(); i++){
			for (int j = 0; j < ketqua[i].size(); j++){
				cout << ketqua[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}