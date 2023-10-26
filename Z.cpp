#include <iostream>
#include <queue>
#include <unordered_set>
#include <sstream>
using namespace std;

queue<int> findUnion(queue<int> q1, queue<int> q2) {
    // Tạo một tập hợp (set) để lưu trữ các phần tử duy nhất
    unordered_set<int> uniqueElements;

    // Duyệt qua hàng đợi q1 và thêm các phần tử vào tập hợp uniqueElements
    while (!q1.empty()) {
        uniqueElements.insert(q1.front());
        q1.pop();
    }

    // Duyệt qua hàng đợi q2 và thêm các phần tử vào tập hợp uniqueElements
    while (!q2.empty()) {
        uniqueElements.insert(q2.front());
        q2.pop();
    }

    // Tạo một hàng đợi mới để chứa kết quả
    queue<int> resultQueue;

    // Duyệt qua tập hợp uniqueElements và thêm các phần tử vào hàng đợi kết quả
    for (int num : uniqueElements) {
        resultQueue.push(num);
    }

    return resultQueue;
}

int main() {
    int t; // Số lượng testcase
    cin >> t;
    cin.ignore(); // Đọc ký tự xuống dòng sau số lượng testcase

    for (int i = 0; i < t; i++) {
        string input1, input2;
        getline(cin, input1);
        getline(cin, input2);

        queue<int> q1, q2;
        queue<int> result;

        stringstream ss1(input1);
        stringstream ss2(input2);
        string num1, num2;

        while (getline(ss1, num1, ',')) {
            int val = stoi(num1);
            q1.push(val);
        }

        while (getline(ss2, num2, ',')) {
            int val = stoi(num2);
            q2.push(val);
        }

        result = findUnion(q1, q2);

        // In kết quả ra màn hình
        while (!result.empty()) {
            cout << result.front();
            result.pop();
            if (!result.empty()) {
                cout << ",";
            }
        }

        cout << endl;
    }

    return 0;
}
