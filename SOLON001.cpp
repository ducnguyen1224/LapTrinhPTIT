#include <bits/stdc++.h>
using namespace std;
int t;
string s;
string addLargeNumbers(string num1, string num2)
{
    string result = "";
    int carry = 0;
    if (num1.length() < num2.length())
    {
        swap(num1, num2);
    }

    int len1 = num1.length();
    int len2 = num2.length();

    for (int i = len1 - 1; i >= 0; i--)
    {
        int digit1 = num1[i] - '0';
        int digit2 = i >= len1 - len2 ? num2[i - (len1 - len2)] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result = char(sum % 10 + '0') + result;
    }

    if (carry > 0)
    {
        result = char(carry + '0') + result;
    }

    return result;
}
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    vector<int> result(len1 + len2, 0);

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    string resultStr;
    for (int digit : result)
    {
        if (!(resultStr.empty() && digit == 0))
        {
            resultStr += to_string(digit);
        }
    }

    return resultStr.empty() ? "0" : resultStr;
}
int main()
{
    freopen("bignumber.in", "r", stdin);
    freopen("bignumber.out", "w", stdout);
    string s;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        string num1;
        string num2;
        size_t found_1 = s.find('+');
        size_t found_2 = s.find('*');
        if (found_1 != string::npos)
        {
            num1 = s.substr(0, found_1 - 1);
            num2 = s.substr(found_1 + 2, s.size() - 1);
            cout << addLargeNumbers(num1, num2);
            cout << "\n";
        }
        else
        {
            num1 = s.substr(0, found_2 - 1);
            num2 = s.substr(found_2 + 2, s.size() - 1);
            cout << multiply(num1, num2);
            cout << "\n";
        }
    }
    return 0;
}