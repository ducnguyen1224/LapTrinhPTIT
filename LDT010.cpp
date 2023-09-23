#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        // Số quân tượng lớn nhất có thể đặt trên bàn cờ nxn
        // là 2 * (N - 1)
        long long result = 2 * (N - 1);

        cout << result << endl;
    }

    return 0;
}
