#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    vector<string> actions;
    int targetIndex = 0;

    for (int i = 1; i <= n; i++) {
        if (targetIndex == target.size()) {
            break;
        }
        actions.push_back("Push");
        if (target[targetIndex] != i) {
            actions.push_back("Pop");
        } else {
            targetIndex++;
        }
    }

    return actions;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> target(n);
        for (int j = 0; j < n; j++) {
            cin >> target[j];
        }

        vector<string> actions = buildArray(target, n);

        cout << "Test Case #" << i + 1 << endl;
        for (const string& action : actions) {
            cout << action << " ";
        }
        cout << endl;
    }

    return 0;
}
