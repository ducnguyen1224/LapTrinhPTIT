#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 15;
int n, ans;
vector<vector<char>> board(MAX_N, vector<char>(MAX_N, '.'));

bool isSafe(int row, int col) {
    // Kiểm tra hàng và cột
    for (int i = 0; i < n; i++) {
        if (board[row][i] == 'Q' || board[i][col] == 'Q') {
            return false;
        }
    }

    // Kiểm tra đường chéo chính
    for (int i = 0; i < n; i++) {
        int diag1 = row - i;
        int diag2 = row + i;
        if (diag1 >= 0 && diag1 < n && board[diag1][col - i] == 'Q') {
            return false;
        }
        if (diag2 >= 0 && diag2 < n && board[diag2][col - i] == 'Q') {
            return false;
        }
    }

    return true;
}

void solve(int col) {
    if (col == n) {
        ans++;
        cout << "Solution #" << ans << ":\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << board[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for (int row = 0; row < n; row++) {
        if (isSafe(row, col)) {
            board[row][col] = 'Q';
            solve(col + 1);
            board[row][col] = '.'; // Quay lui
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        solve(0);
        cout << "Total solutions for N=" << n << ": " << ans << endl;
    }
    return 0;
}
