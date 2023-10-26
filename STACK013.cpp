#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

string simplifyPath(string path) {
    stack<string> st;
    string directory = "";
    
    for (int i = 0; i < path.size(); i++) {
        if (path[i] == '/') {
            if (directory == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            } else if (directory != "." && !directory.empty()) {
                st.push(directory);
            }
            directory = "";
        } else {
            directory += path[i];
        }
    }
    
    if (directory == "..") {
        if (!st.empty()) {
            st.pop();
        }
    } else if (directory != "." && !directory.empty()) {
        st.push(directory);
    }
    
    vector<string> dirs;
    while (!st.empty()) {
        dirs.insert(dirs.begin(), st.top());
        st.pop();
    }
    
    string result = "/";
    for (const string& dir : dirs) {
        result += dir + "/";
    }
    
    if (result.size() > 1) {
        result.pop_back(); // Remove the trailing '/'
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    for (int i = 0; i < t; i++) {
        string path;
        getline(cin, path);
        string result = simplifyPath(path);
        cout << result << endl;
    }

    return 0;
}
