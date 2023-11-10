#include <iostream>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) {
        return 1;
    }
    double temp = myPow(x, n / 2);
    if (n % 2 == 0) {
        return temp * temp;
    } else {
        return n > 0 ? x * temp * temp : (temp * temp) / x;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        double x;
        int n;
        cin >> x >> n;
        double result = myPow(x, n);
        cout << result << endl;
    }

    return 0;
}
