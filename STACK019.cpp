#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> result(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int prevDay = st.top();
            st.pop();
            result[prevDay] = i - prevDay;
        }
        st.push(i);
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // consume newline character

    for (int i = 0; i < t; i++) {
        string input;
        getline(cin, input);
        vector<int> temperatures;
        size_t pos = 0;
        while ((pos = input.find(",")) != string::npos) {
            string token = input.substr(0, pos);
            temperatures.push_back(stoi(token));
            input.erase(0, pos + 1);
        }
        temperatures.push_back(stoi(input));

        vector<int> result = dailyTemperatures(temperatures);

        for (int j = 0; j < result.size(); j++) {
            cout << result[j];
            if (j < result.size() - 1) {
                cout << ",";
            }
        }
        cout << endl;
    }

    return 0;
}
