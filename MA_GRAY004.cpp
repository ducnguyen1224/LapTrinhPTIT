#include <iostream>
#include <cmath>
using namespace std;

int findGrayCode(int n) {
    return n ^ (n >> 1);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int grayCode = findGrayCode(N);
        cout << grayCode << endl;
    }

    return 0;
}
