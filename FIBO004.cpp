#include <bits/stdc++.h>
using namespace std;

// Tao mot bang bam de kiem tra so Fibonacci
void table_hash (set<int>& hash, int phantuMax){
	// Luu tru hai so dau tien
	int prev =  0 , curr = 1;
	hash.insert (prev);
	hash.insert (curr);
	
	// Tim so Fibo thu N va luu no vao bang bam
	while (curr < phantuMax){
		int temp = curr + prev;
		hash.insert(temp);
		prev = curr;
		curr = temp;
	}
}

// Ham tra ve cap so Fibonacci co tong bang N
void cap_so_Fibonacci (int n){
	// Tao mot tap hop chua so Fibonacci
	set<int> hash;
	table_hash(hash, n);
	
	// Duyet tat ca cac phan tu de tim cap so
	for (int i = 0; i < n ; i++){
		// Neu i va (n-i) la so Fibonacci
		if (hash.find(i) != hash.end() && hash.find(n-i) != hash.end()){
			cout << i << " " << (n - i) << endl;
			return;
		}
	}
	// Neu khong co cap nao thoa man
	cout << "-1" << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cap_so_Fibonacci(n);
	}
	return 0;
}