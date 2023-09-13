#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra xem có thể đặt quân hậu tại ô (row, col) không
bool is_safe(vector<vector<int>> &board, int row, int col, int n)
{
    // Kiểm tra cột
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }

    // Kiểm tra đường chéo trái trên
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    // Kiểm tra đường chéo phải trên
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}
int place_queens(vector<vector<int>> &board, int row, int n)
{
    if (row == n)
    {
        return 1;
    }

    int count = 0;

    for (int col = 0; col < n; col++)
    {
        if (is_safe(board, row, col, n))
        {
            board[row][col] = 1;
            count += place_queens(board, row + 1, n);

            board[row][col] = 0;
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<vector<int>> board(n, vector<int>(n, 0));

        int total_solutions = place_queens(board, 0, n);
        cout << total_solutions << endl;
    }

    return 0;
}
//by to SYQUY