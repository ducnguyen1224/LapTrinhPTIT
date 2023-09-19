#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        size_t begin = s.find('"');
        size_t end = s.find(':');
        string hours = s.substr(begin, end - begin);
        string minutes = s.substr(end + 1, s.length() - 2 - begin);
        if (hours[1] == '1')
        {
            if (hours[2] == '?')
                hours[2] = '9';
        }
        else if (hours[1] == '0')
        {
            if (hours[2] == '?')
                hours[2] = '9';
        }
        else if (hours[1] == '2')
        {
            if (hours[2] == '?')
                hours[2] = '3';
        }
        else
        {
            if (hours[2] == '?')
            {
                hours[1] = '2';
                hours[2] = '3';
            }
            else if (int(hours[2] - '0') >= 4)
            {
                hours[1] = '1';
            }
            else
            {
                hours[1] = '2';
            }
        }
        // cout << minutes;
        if (minutes[0] == '?')
        {
            minutes[0] = '5';
        }
        if (minutes[1] == '?')
            minutes[1] = '9';
        cout << hours << ':' << minutes << "\n";
    }
    return 0;
}