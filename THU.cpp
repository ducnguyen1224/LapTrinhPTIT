#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int digitSquareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, K, X, S;
    
    // Nhập giá trị N, K, X, S từ bàn phím
    cout << "Nhập N: ";
    cin >> N;
    cout << "Nhập K: ";
    cin >> K;
    cout << "Nhập X: ";
    cin >> X;
    cout << "Nhập S: ";
    cin >> S;

    // Bắt đầu tìm số thỏa mãn các điều kiện
    int lowerBound = pow(10, N - 1);
    int upperBound = pow(10, N) - 1;
    bool found = false;

    for (int i = lowerBound; i <= upperBound; i++) {
        if (isPrime(i) && digitSum(i) == K && i % 10 == X && digitSquareSum(i) == S) {
            cout << "Số nguyên dương thỏa mãn các điều kiện là: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Không tìm thấy số thỏa mãn các điều kiện." << endl;
    }

    return 0;
}
