#include <iostream>
#include <vector>
using namespace std;

int findLongestSubarray(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 1);

    int maxLength = 1;

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            // Kiểm tra xem phần tử arr[i] và arr[j] có chung ít nhất một chữ số hay không
            bool hasCommonDigit = false;
            int x = arr[i];
            int y = arr[j];
            while (x > 0 && !hasCommonDigit) {
                int digitX = x % 10;
                while (y > 0) {
                    int digitY = y % 10;
                    if (digitX == digitY) {
                        hasCommonDigit = true;
                        break;
                    }
                    y /= 10;
                }
                x /= 10;
            }

            if (hasCommonDigit) {
                dp[i] = max(dp[i], dp[j] + 1);
                maxLength = max(maxLength, dp[i]);
            }
        }
    }

    return maxLength;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }
        int result = findLongestSubarray(arr);
        cout << result << endl;
    }

    return 0;
}
