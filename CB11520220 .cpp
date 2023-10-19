#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

// Hàm tính tích của hai ma trận
vector<vector<long long>> multiplyMatrix(vector<vector<long long>> &A, vector<vector<long long>> &B) {
    int N = A.size();
    vector<vector<long long>> C(N, vector<long long>(N, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }

    return C;
}

// Hàm tính ma trận A^k
vector<vector<long long>> matrixPower(vector<vector<long long>> &A, int K) {
    int N = A.size();
    vector<vector<long long>> result(N, vector<long long>(N, 0));

    for (int i = 0; i < N; i++) {
        result[i][i] = 1;
    }

    while (K > 0) {
        if (K % 2 == 1) {
            result = multiplyMatrix(result, A);
        }
        A = multiplyMatrix(A, A);
        K /= 2;
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<vector<long long>> A(N, vector<long long>(N));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> A[i][j];
            }
        }

        vector<vector<long long>> X = matrixPower(A, K);

        long long sum = 0;
        for (int i = 0; i < N; i++) {
            sum = (sum + X[i][i]) % MOD;
        }

        cout << sum << endl;
    }

    return 0;
}
