#include <bits/stdc++.h>
using namespace std;
 
int ChenhLechNhoNhat(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    // Create an array to store results of subproblems
    bool dp[n + 1][sum + 1];
 

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
 
    // Ðien vao bang phan vung tu duoi len
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            // Nêu phan tu i bi loai tru
            dp[i][j] = dp[i - 1][j];
 
            // Neu phan tu i duoc chon
            if (arr[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - arr[i - 1]];
        }
    }
 
    // Khoi tao chenh lech cua hai tong
    int diff = INT_MAX;
 
    // Tim j lon nhat sao cho dp[n][j]
    // la dung va lap j tu sum/2 ve 0
    for (int j = sum / 2; j >= 0; j--) {
        if (dp[n][j] == true) {
            diff = sum - 2 * j;
            break;
        }
    }
    return diff;
}

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		} 
		cout << ChenhLechNhoNhat(arr,n) << endl;
	}
	return 0;
}