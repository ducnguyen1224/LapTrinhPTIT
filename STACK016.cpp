#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;

string countOfAtoms(string formula) {
    stack<map<string, int>> st;
    st.push({});
    int i = 0, n = formula.size();

    while (i < n) {
        if (formula[i] == '(') {
            st.push({});
            i++;
        } else if (formula[i] == ')') {
            map<string, int> curr = st.top();
            st.pop();
            i++;
            int count = 0;
            while (i < n && isdigit(formula[i])) {
                count = count * 10 + (formula[i] - '0');
                i++;
            }
            count = (count == 0) ? 1 : count;

            map<string, int> prev = st.top();
            for (const auto& kvp : curr) {
                prev[kvp.first] += kvp.second * count;
            }
            st.pop();
            st.push(prev);
        } else {
            string element = "";
            element += formula[i];
            i++;
            while (i < n && islower(formula[i])) {
                element += formula[i];
                i++;
            }
            int count = 0;
            while (i < n && isdigit(formula[i])) {
                count = count * 10 + (formula[i] - '0');
                i++;
            }
            count = (count == 0) ? 1 : count;

            st.top()[element] += count;
        }
    }

    map<string, int> counts = st.top();
    string result = "";
    for (const auto& kvp : counts) {
        result += kvp.first;
        if (kvp.second > 1) {
            result += to_string(kvp.second);
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // consume newline character

    for (int i = 0; i < t; i++) {
        string formula;
        getline(cin, formula);

        string result = countOfAtoms(formula);
        cout << result << endl;
    }

    return 0;
}
