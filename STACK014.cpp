#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isValidString(string s) {
    while (s.find("abc") != string::npos) {
        size_t pos = s.find("abc");
        s.erase(pos, 3);
    }
    return s.empty();
}

int main() {
    int num_test_cases;
    cin >> num_test_cases;
    
    vector<bool> results;
    
    for (int i = 0; i < num_test_cases; i++) {
        string s;
        cin >> s;
        bool result = isValidString(s);
        results.push_back(result);
    }
    
    for (bool result : results) {
        cout << result << endl;
    }
    
    return 0;
}