//GIAI THỪA CÓ N SỐ 0 Ở CUỐI
#include <bits/stdc++.h>
using namespace std;

#define int long long


int cnt(int n) {
    int cnt = 0;
    while (n >= 5) {
        n /= 5;
        cnt += n;
    }
    return cnt;
}

void implement() {
    int n;
    cin >> n;
    int left = 5, right = 5 * n, res = -1;
    // Tìm kiếm nhị phân xác định xem có cái nào thừa số 0
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (cnt(mid) >= n) {
            res = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << res << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        implement();
    }
    return 0;
}