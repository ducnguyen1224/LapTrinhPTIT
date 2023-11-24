#include<bits/stdc++.h>
using namespace std;
string findMinNum(const string& pattern) {
    int n = pattern.length();
   string result;
   stack<int> stack;

    for (int i = 0; i <= n; ++i) {
        stack.push(i + 1);

        if (i == n || pattern[i] == 'I') {
            while (!stack.empty()) {
                result +=to_string(stack.top());
                stack.pop();
            }
        }
    }

    return result;
}

int main() {
    int t;
   cin >> t;
while (t--){
     string pattern;
       cin >> pattern;

       string result = findMinNum(pattern);
       cout << result <<endl;
    
}   
  return 0;
}
