#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    vector<int> result(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && prices[i] < prices[st.top()]) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = prices[i] - prices[st.top()];
        } else {
            result[i] = prices[i];
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
        vector<int> prices;
        size_t pos = 0;
        while ((pos = input.find(",")) != string::npos) {
            string token = input.substr(0, pos);
            prices.push_back(stoi(token));
            input.erase(0, pos + 1);
        }
        prices.push_back(stoi(input));

        vector<int> result = finalPrices(prices);

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
