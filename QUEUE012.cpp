#include<bits/stdc++.h>
using namespace std;

queue<int> findUnion(
    queue<int> q1, 
queue<int> q2) {
    
    unordered_set<int> seen;
    
    queue<int> result;

    while (!q1.empty()) {
        int element = q1.front();
        q1.pop();

        if (seen.find(element) == seen.end()) {
            seen.insert(element);
            result.push(element);
        }
    }

    while (!q2.empty()) {
        int element = q2.front();
        q2.pop();

        if (seen.find(element) == seen.end()) {
            seen.insert(element);
            result.push(element);
        }
    }

    return result;
}

// Function to convert string to queue

queue<int> stringToQueue(
    string input) {
    
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

// Function to convert queue to string

string queueToString(
    queue<int> q) {
    
    string result;
    while (!q.empty()) {
        result += 
        to_string(q.front()) + ",";
        q.pop();
    }
    if (!result.empty()) {
        result.pop_back(); // Remove the trailing comma
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

        
        queue<int> result = findUnion(q1, q2);

        
        cout << queueToString(result) << 
        endl;
    }

    return 0;
}
