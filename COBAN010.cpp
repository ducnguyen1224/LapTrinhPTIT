#include <bits/stdc++.h>
//
const int Mod = 1e9 + 7;
using namespace std;

// Hàm tính phần dư của một chuỗi số a khi chia cho Mod
long long mod(string a, int Mod){
	long long r = 0;
	for (int i = 0; i < a.size(); i++){
		r = r * 10 + a[i] - '0';
		r %= Mod;
	}
	return r;
}

// Hàm tính a^b % Mod sử dụng thuật toán mũ
// tính a^n sử dụng phép tính mũ theo thuật toán chia để trị. Nó sử dụng vòng lặp while để tính toán a^n bằng cách liên tục chia n cho 2 và cập nhật kết quả. Khi n lẻ, nó nhân kết quả với a và lấy phần dư sau khi nhân.
long long power(long long a, long long b){
	long long res = 1;
	while (b){
		if (b % 2 == 1){
			res *= a;
			res %= Mod; 
		}
		a *= a;
		a %= Mod;
		b  /= 2;
	}
	return res;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		string a, b;
		cin >> a >> b;
		// Chuyển chuỗi số a và b thành các số nguyên và tính phần dư
		long long numA = mod(a, Mod);
		long long numB = mod(b, Mod - 1);//. Hàm mod sẽ chuyển chuỗi b thành một số nguyên và sau đó tính phần dư của số nguyên đó khi chia cho Mod - 1
		// Tính a^b % Mod và in kết quả 
		long long result = power(numA, numB) % Mod;
		cout << result << endl;
	}
	return 0;
}
