#include<bits/stdc++.h>
using namespace std;

void generateGrayCode(int n) {
    vector<string> grayCodes;
    grayCodes.push_back("0");
    grayCodes.push_back("1");

    for (int i = 2; i < (1 << n); i = i << 1) {
        for (int j = i - 1; j >= 0; j--) {
            grayCodes.push_back(grayCodes[j]);
        }
        for (int j = 0; j < i; j++) {
            grayCodes[j] = "0" + grayCodes[j];
            grayCodes[i + j] = "1" + grayCodes[i + j];
        }
    }

    for (int i = 0; i < (1 << n); i++) {
        cout << grayCodes[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        generateGrayCode(n);
    }

    return 0;
}
