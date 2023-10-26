#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int calPoints(vector<string>& ops) {
    stack<int> s;
    for (string op : ops) {
        if (op == "C") {
            if (!s.empty()) {
                s.pop();
            }
        } else if (op == "D") {
            if (!s.empty()) {
                int last = s.top();
                s.push(2 * last);
            }
        } else if (op == "+") {
            if (s.size() >= 2) {
                int last1 = s.top();
                s.pop();
                int last2 = s.top();
                s.push(last1);
                s.push(last1 + last2);
            }
        } else {
            s.push(stoi(op));
        }
    }
    
    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        string input;
        getline(cin, input);
        vector<string> ops;
        string delimiter = ",";
        size_t pos = 0;
        while ((pos = input.find(delimiter)) != string::npos) {
            string token = input.substr(0, pos);
            ops.push_back(token);
            input.erase(0, pos + delimiter.length());
        }
        ops.push_back(input);
        
        int result = calPoints(ops);
        cout << result << endl;
    }
    
    return 0;
}
