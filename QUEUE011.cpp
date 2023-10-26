#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int minValue(queue<int> &q) {
    if (q.empty()) {
        return 0; // Hoặc trả về giá trị mặc định tuỳ theo yêu cầu
    }

    int minVal = q.front(); // Giả sử phần tử đầu tiên là giá trị nhỏ nhất

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current < minVal) {
            minVal = current; // Nếu tìm thấy phần tử nhỏ hơn, cập nhật giá trị nhỏ nhất
        }
    }

    return minVal;
}

int main() {
    int t; // Số lượng testcase
    cin >> t;
    cin.ignore(); // Đọc ký tự xuống dòng sau số lượng testcase

    for (int i = 0; i < t; i++) {
        string input;
        getline(cin, input);

        queue<int> q;
        stringstream ss(input);
        string num;

        while (getline(ss, num, ',')) {
            int val = stoi(num);
            q.push(val);
        }

        int result = minValue(q);
        cout << result << endl;
    }

    return 0;
}
