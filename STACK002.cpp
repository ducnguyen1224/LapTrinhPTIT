
#include <bits/stdc++.h>
using namespace std;
bool kt(char x)
{
    if (x >= 97 && x <= 122)
        return true;
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return true;
    return false;
}
bool solve(string s)
{
    stack<char> a;
    for (int i = 0; i < s.length(); i++)
    {
        char x = s[i];
        if (x == '(')
            a.push(x);
        if (kt(x))
            a.push(x);
        if (x == ')')
        {
            int dem = 0;
            char y = a.top();
            while (y != '(')
            {
                dem++;
                a.pop();
                if (a.empty())
                    break;
                y = a.top();
            }
            if (dem <= 1)
                return true;
            a.pop();
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (solve(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}