#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maxBitDifference(string s) {
    int n = s.size();
    int maxDiff = -1; // Khởi tạo maxDiff là -1 nếu không có bit 0 trong chuỗi

    for (int i = 0; i < n; i++) {
        int count0 = 0; // Đếm số bit 0 từ vị trí i
        int count1 = 0; // Đếm số bit 1 từ vị trí i

        for (int j = i; j < n; j++) {
            if (s[j] == '0') {
                count0++;
            } else {
                count1++;
            }

            int diff = count0 - count1;
            maxDiff = max(maxDiff, diff);
        }
    }

    return maxDiff;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int result = maxBitDifference(s);

        cout << result << endl;
    }

    return 0;
}
