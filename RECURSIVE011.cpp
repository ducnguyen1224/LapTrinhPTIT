#include<bits/stdc++.h>
using namespace std;

string one_to_nineteen[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string thousands[] = {"", "Thousand ", "Million ", "Billion "};

// Khai báo prototype cho hàm helper
string helper(int num);

string numberToWords(int num) {
    if (num == 0) return "Zero";
    
    int i = 0;
    string words = "";
    
    while (num > 0) {
        if (num % 1000 != 0) {
            words = helper(num % 1000) + thousands[i] + words;
        }
        num /= 1000;
        i++;
    }
    
    while (words.back() == ' ') {
        words.pop_back();
    }
    return words;
}

string helper(int num) {
    if (num == 0) {
        return "";
    } else if (num < 20) {
        return one_to_nineteen[num] + " ";
    } else if (num < 100) {
        return tens[num / 10 - 2] + " " + helper(num % 10);
    } else {
        return one_to_nineteen[num / 100] + " Hundred " + helper(num % 100);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        cout << numberToWords(num) << endl;
    }
    return 0;
}