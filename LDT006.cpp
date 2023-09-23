#include <iostream>
#include <string>
using namespace std;

string subtractWithCarry(string str1, string str2) {
    int n = str1.length();
    int m = str2.length();

    // Đảm bảo str1 luôn có độ dài lớn hơn hoặc bằng str2
    if (n < m) {
        swap(str1, str2);
        swap(n, m);
    }

    string result = "";
    int carry = 0;

    for (int i = 0; i < n; ++i) {
        int digit1 = str1[n - 1 - i] - '0';
        int digit2 = (i < m) ? str2[m - 1 - i] - '0' : 0;

        // Tính phần bù 9 của digit1 và digit2
        int complement1 = 9 - digit1;
        int complement2 = 9 - digit2;

        // Tính tổng của phần bù 10 (phần bù 9 + 1) của digit1 và digit2, cộng thêm biến carry
        int sum = complement1 + complement2 + carry;

        // Nếu sum >= 10, cập nhật biến carry
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }

        result = to_string(sum) + result;
    }

    // Xóa các số 0 dư ở đầu kết quả
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        result = result.substr(pos);
    }

    return (result.empty()) ? "0" : result;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string str1, str2;
        cin >> str1 >> str2;
        string result = subtractWithCarry(str1, str2);
        cout << result << endl;
    }

    return 0;
}
