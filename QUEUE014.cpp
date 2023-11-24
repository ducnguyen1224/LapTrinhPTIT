#include <iostream>
#include <queue>
#include <sstream>
using namespace std;
bool checkEqual(queue<int> q1, queue<int> q2) {
    if (q1.size() != q2.size()) {
        return false;
    }

    while (!q1.empty() && !q2.empty()) {
        if (q1.front() != q2.front()) {
            return false;
        }

        q1.pop();
        q2.pop();
    }

    return true;
}

// Hàm chuyển đổi chuỗi thành hàng đợi
queue<int> stringToQueue(string input) {
    queue<int> result;
    stringstream ss(input);
    int number;
    char comma;
    while (ss >> number) {
        result.push(number);
        ss >> comma;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string s1, s2;
        cin >> s1 >> s2;

        queue<int> q1 = stringToQueue(s1);
        queue<int> q2 = stringToQueue(s2);

        bool result = checkEqual(q1, q2);

        cout << result << endl;
    }

    return 0;
}
