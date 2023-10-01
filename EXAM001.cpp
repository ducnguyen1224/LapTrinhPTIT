#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int countVisibleCharacters(const  string& inputString) {
    int count = 0;

    for (char c : inputString) {
        if (isgraph(c)) {
            count++;
        }
    }

    return count;
}

int main() {
     ostringstream oss;
    string line;
    while (std::getline(std::cin, line)) {
        oss << line << "\n";
    }
    string inputString = oss.str();
    int visibleCharacterCount = countVisibleCharacters(inputString);
     cout << visibleCharacterCount;

    return 0;
}
