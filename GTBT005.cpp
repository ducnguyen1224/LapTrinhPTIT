#include <bits/stdc++.h>
#define PI 3.14159265358979323846
#define epsi 1e-5

using namespace std;

double computeSin(double x) {
    double S = x;
    double T = x;
    double lt = x;
    double gt = 1.0;
    int car = -1;

    for (int i = 3; fabs(T) > epsi; i += 2, car = -car) {
        lt *= x * x;
        gt *= i * (i - 1);
        T = lt / gt;
        S += car * T;
    }

    return S;
}

int main() {
    int t;
    cin >> t;

    cout << fixed << setprecision(6); // Đặt độ chính xác của số thực là 6 chữ số sau dấu phẩy
    
    while (t--) {
        double x;
        cin >> x;
        double result = computeSin(x);
        cout << result << endl;
    }

    return 0;
}
