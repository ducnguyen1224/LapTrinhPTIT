#include<bits/stdc++.h>
using namespace std;
int shortestCommonSupersequence(string A, string B) {
    int n = A.length();
    int m = B.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Thiết lập giá trị ban đầu
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++) {
        dp[0][j] = 0;
    }

    // Tính độ dài xâu mẹ chung
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return n + m - dp[n][m];
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<shortestCommonSupersequence(s1,s2)<<"\n";
	}
}