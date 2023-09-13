#include <bits/stdc++.h>
using namespace std;

int dem = 0;
vector<int> arr;

void findSubset(int tong, int K, int S, int chiso) {
    if (tong == S && K == 0) {
        dem++;
        return;
    }
    if (chiso == arr.size() || K == 0) {
        return;
    }

    // Bước này kiểm tra xem có đủ số lượng phần tử còn lại để tạo tổng S không
    int remaining_elements = arr.size() - chiso;
    if (tong + arr[chiso] <= S && remaining_elements >= K) {
        // Chọn phần tử thứ chiso vào tập con
        findSubset(tong + arr[chiso], K - 1, S, chiso + 1);
    }

    // Bước này bỏ qua phần tử thứ chiso và tiếp tục tìm kiếm
    findSubset(tong, K, S, chiso + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K, S;
        cin >> N >> K >> S;
        for (int i = 0; i < N; i++) {
            int b;
            cin >> b;
            arr.push_back(b);
        }
        findSubset(0, K, S, 0);
        cout << dem << endl;
        dem = 0;
        arr.clear();
    }
    return 0;
}