#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;
const int INF = 1e9;

int n, m;
int graph[MAXN][MAXN];
int dp[MAXN][1 << MAXN];

int tsp(int u, int mask) {
    if (mask == (1 << n) - 1) {
        if (graph[u][0] != 0) {
            return graph[u][0];
        }
        return INF;
    }

    if (dp[u][mask] != -1) {
        return dp[u][mask];
    }

    int ans = INF;
    for (int v = 0; v < n; ++v) {
        if (!(mask & (1 << v)) && graph[u][v] != 0) {
            ans = min(ans, graph[u][v] + tsp(v, mask | (1 << v)));
        }
    }

    return dp[u][mask] = ans;
}

int main() {
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u - 1][v - 1] = w;
    }

    int result = tsp(0, 1); // Bắt đầu từ thành phố 0 và đánh dấu đã ghé thăm thành phố 0
    if (result == INF) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
