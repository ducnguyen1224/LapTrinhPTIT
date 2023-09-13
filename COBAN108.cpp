#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int N = 205;
int T, n, f[N][N], p10[N] = {1};

void solve() {
    cin >> n;
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200 - i; j++) {
            f[i][j] = -1;
        }
    }
    for (int i = 1; i <= 200; i++) {
        p10[i] = (p10[i-1] * 10) % n;
    }

    queue<pair<int, int>> st;
    st.push({0, 1});
    f[0][1] = 6 % n;
    st.push({1, 0});
    f[1][0] = 8 % n;

    while (!st.empty()) {
        int x = st.front().first;
        int y = st.front().second;
        st.pop();

        if (f[x][y] == 0) {
            for (int i = 1; i <= x; i++) {
                cout << "8";
            }
            for (int i = 1; i <= y; i++) {
                cout << "6";
            }
            cout << endl;
            return;
        }

        if (x + y == 200) continue;

        if (f[x][y + 1] == -1) {
            f[x][y + 1] = (f[x][y] * 10 % n + 6) % n;
            st.push({x, y + 1});
        }

        if (f[x + 1][y] == -1) {
            f[x + 1][y] = (8 * p10[x + y] % n + f[x][y]) % n;
            st.push({x + 1, y});
        }
    }

    cout << "-1" << endl;
}

int main() {
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
//by to SIVU