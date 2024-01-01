#include <bits/stdc++.h>
//baitoandulich
using namespace std;
vector<int> optimalPath;
int minCost = numeric_limits<int>::max();

void tspBruteforce(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> cities(n);
    for (int i = 0; i < n; ++i) {
        cities[i] = i;
    }
    do {
        int cost = 0;
        for (int i = 0; i < n - 1; ++i) {
            cost += graph[cities[i]][cities[i + 1]];
        }
        cost += graph[cities[n - 1]][cities[0]]; 

        if (cost < minCost) {
            minCost = cost;
            optimalPath = cities;
        }
    } while (next_permutation(cities.begin(), cities.end()));
}

int main() {
    int m, n;

    cout << "Hang: ";
    cin >> m;
    cout << "Cot: ";
    cin >> n;

    vector<vector<int>> yourGraph(m, vector<int>(n));

    cout << "nhap ma tran:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> yourGraph[i][j];
        }
    }

    tspBruteforce(yourGraph);

    cout << "Duong di toi uu: ";
    for (int city : optimalPath) {
        cout << city << " ";
    }
    cout << endl;
    cout << "Chi phi toi thieu: " << minCost << endl;

    return 0;
}
