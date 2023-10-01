#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t; // Nhập số lượng testcase

    while (t--) {
        int n;
        cin >> n; // Nhập số lượng phần tử trong dãy

        vector<int> A(n);

        for (int i = 0; i < n; ++i) {
            cin >> A[i]; // Nhập các phần tử của dãy
        }

        // Sắp xếp dãy giảm dần
        sort(A.rbegin(), A.rend());

        long long sum1 = 0, sum2 = 0; // Tổng của hai nhóm

        for (int i = 0; i < n; ++i) {
            if (sum1 <= sum2) {
                sum1 += A[i]; // Thêm vào nhóm 1
            } else {
                sum2 += A[i]; // Thêm vào nhóm 2
            }
        }

        // Tính tích của tổng hai nhóm
        long long product = sum1 * sum2;

        cout << product << endl;
    }

    return 0;
}
//ac(3/10)