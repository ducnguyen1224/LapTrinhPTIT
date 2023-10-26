#include <iostream>
#include <string>
#include <stack>

using namespace std;

string removeKDigits(string num, int k) {
    stack<char> s;
    
    for (char digit : num) {
        while (k > 0 && !s.empty() && s.top() > digit) {
            s.pop();
            k--;
        }
        s.push(digit);
    }
    
    // Loại bỏ k chữ số cuối cùng nếu còn
    while (k > 0) {
        s.pop();
        k--;
    }
    
    string result = "";
    while (!s.empty()) {
        result = s.top() + result;
        s.pop();
    }
    
    // Loại bỏ số 0 ở đầu (nếu có)
    int i = 0;
    while (i < result.length() && result[i] == '0') {
        i++;
    }
    result = result.substr(i);
    
    // Nếu chuỗi rỗng thì trả về "0"
    if (result.empty()) {
        return "0";
    }
    
    return result;
}

int main() {
    int testcases;
    cin >> testcases;
    
    for (int t = 0; t < testcases; t++) {
        string num;
        int k;
        cin >> num >> k;
        
        string result = removeKDigits(num, k);
        cout << result << endl;
    }
    
    return 0;
}
