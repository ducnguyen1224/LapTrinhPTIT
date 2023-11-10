#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int t;
   cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
       cin >> n;
        long long result = factorial(n);
       cout << result <<endl;
    }

    return 0;
}
