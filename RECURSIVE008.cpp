#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int sumOfPrimes(int start, int end) {
    if (start > end) {
        return 0;
    }

    if (isPrime(start)) {
        return start + sumOfPrimes(start + 1, end);
    } else {
        return sumOfPrimes(start + 1, end);
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int start, end;
        cin >> start >> end;

        int totalSum = sumOfPrimes(start, end);
        cout << totalSum << endl;
    }

    return 0;
}
