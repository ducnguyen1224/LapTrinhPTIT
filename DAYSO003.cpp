#include <bits/stdc++.h>
using namespace std;

//ham tra ve he so nhi thuc C(n,k)
int binomialCoeff (int n, int k){
	int C[n+1][k+1];
	int i, j;
	
	// Tính gia tri he so nhi thuc tu duoi len
	for (int i = 0; i <= n ;i++){
		for (int j = 0; j <= min (i,k); j++){
			if (j == 0  || j == i)
				C[i][j] = 1;
			else 
				C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
	return C[n][k];
}

// ham tra ve chuoi con hop le

int cntSubSeq(int arr[], int n, int k)
{
 
    sort(arr, arr + n);
    int num = arr[k - 1];
 
    int Y = 0;
    for (int i = k - 1; i >= 0; i--) {
        if (arr[i] == num)
            Y++;
    }
    int cntX = Y;
    for (int i = k; i < n; i++) {
        if (arr[i] == num)
            cntX++;
    }
 
    return binomialCoeff(cntX, Y);
}

int main (){
	int test;
	cin >> test;
	while (test--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		cout << cntSubSeq(arr, n, k) << endl;
	}
	return 0;
}