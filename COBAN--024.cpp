#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K;
        string S;
        cin >> K >> S;

        for (int i = 0; i < S.length(); i++) {
            if (K <= 0) {
                break;
            }

            int maxIdx = i;
            for (int j = i + 1; j < S.length() && j - i <= K; j++) {
                if (S[j] > S[maxIdx]) {
                    maxIdx = j;
                }
            }

            for (int j = maxIdx; j > i; j--) {
                swap(S[j], S[j - 1]);
                K--;
            }
        }

        cout << S << endl;
    }

    return 0;
}
