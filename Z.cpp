#include <iostream>
using namespace std;
// Hàm kiểm tra số có chỉ chứa các chữ số A và B với tổng số chữ số A bằng tổng số chữ số B hay không
bool isValid(int number, int A, int B) {
    int countA = 0;
    int countB = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit == A) {
            countA++;
        } else if (digit == B) {
            countB++;
        } else {
            return false;  // Số có chữ số khác A và B
        }

        number /= 10;
    }

    return countA == countB;  // Số có tổng số chữ số A bằng tổng số chữ số B
}

int findNumber(int N, int A, int B) {
    while (true) {
        N++;
        if (isValid(N, A, B)) {
            return N;
        }
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int N, A, B;
        cin >> N >> A >> B;

        int result = findNumber(N, A, B);
        cout << result << endl;
    }

    return 0;
}
