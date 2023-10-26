#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int findMaxNumberInQueue(queue<int> &q) {
    if (q.empty()) {
        return 0; // Hoặc trả về giá trị mặc định tuỳ theo yêu cầu
    }

    int maxVal = q.front(); // Giả sử phần tử đầu tiên là số lớn nhất

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current > maxVal) {
            maxVal = current; // Nếu tìm thấy phần tử lớn hơn, cập nhật số lớn nhất
        }
    }

    return maxVal;
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

        int result = findMaxNumberInQueue(q);
        cout << result << endl;
    }

    return 0;
}
