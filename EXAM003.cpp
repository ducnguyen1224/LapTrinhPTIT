#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    long long num;
    while (input >> num) {
        string ans = "";
        long long tmp = num;
        while (tmp > 0) {
            int remainder = (tmp - 1) % 26;
            ans = (char)('A' + remainder) + ans;
            tmp = (tmp - 1) / 26;
        }
        output << ans << '\n';
    }
    return 0;
}