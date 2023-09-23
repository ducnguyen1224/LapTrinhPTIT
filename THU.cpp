#include <iostream>
#include <vector>

using namespace std;

// Hàm tính khoảng cách hoán vị giữa hai hoán vị A và B
int permutationDistance(int N, vector<int>& A, vector<int>& B) {
    vector<int> posA(N + 1);

    // Gán vị trí của từng phần tử trong hoán vị A vào mảng posA
    for (int i = 0; i < N; ++i) {
        posA[A[i]] = i;
    }

    int distance = 0;

    // Xác định số lần cần hoán đổi để chuyển từ A thành B
    for (int i = 0; i < N; ++i) {
        int target = posA[B[i]];  // Vị trí mục tiêu của phần tử B[i] trong A

        // Hoán đổi A[i] với phần tử A[target] để đưa A[target] về đúng vị trí
        while (target != i) {
            swap(A[i], A[target]);
            target = posA[B[i]];  // Cập nhật lại vị trí mục tiêu
            distance++;
        }
    }

    return distance;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector<int> A(N), B(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        int distance = permutationDistance(N, A, B);
        cout << distance << endl;
    }

    return 0;
}
