#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, P;
        cin >> N >> P;

        vector<int> factors = primeFactors(P);
        long long result = N;
        
        for (int factor : factors) {
            long long count = 0;
            long long tempN = N;
            while (tempN >= factor) {
                count += tempN / factor;
                tempN /= factor;
            }
            result = min(result, count);
        }

        cout << result << endl;
    }

    return 0;
}
