#include <iostream>
using namespace std;
int gcd(int s1, int s2) {
    if (s2 == 0) {
        return s1;
    }
    return gcd(s2, s1 % s2);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int s1, s2;
        cin >> s1 >> s2;
        int result = gcd(s1, s2);
        cout << result << endl;
    }

    return 0;
}
