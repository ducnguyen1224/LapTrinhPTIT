#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

bool is_valid(ll num, ll a, ll b) {
    string s = to_string(num);
    int count_a = 0, count_b = 0;

    for (char ch : s) {
        if (ch - '0' == a) {
            count_a++;
        } else if (ch - '0' == b) {
            count_b++;
        } else {
            return false; // Contains a digit other than A and B
        }
    }

    return count_a == count_b;
}

ll find_min_number(ll n, ll a, ll b) {
    for (ll num = n; num <= 1e16; num++) {
        if (is_valid(num, a, b)) {
            return num;
        }
    }
    return -1; // No such number found
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;

        ll result = find_min_number(n, a, b);
        if (result != -1) {
            cout << result << endl;
        } else {
            cout << "No such number found." << endl;
        }
    }

    return 0;
}
