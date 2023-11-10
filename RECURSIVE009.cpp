#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    int prev = 0, current = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = current;
        current = prev + current;
        prev = temp;
    }
    
    return current;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int result = fibonacci(n);
        cout << result << endl;
    }

    return 0;
}
