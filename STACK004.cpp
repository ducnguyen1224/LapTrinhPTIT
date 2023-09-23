#include <bits/stdc++.h>
using namespace std;
int priority(char x)
{
    if (x == '(' || x == ')')
        return 1;
    if (x == '+' || x == '-')
        return 2;
    if (x == '*' || x == '/')
        return 3;
    if (x == '^')
        return 4;
}
int tt(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
        return 1;
    return 0;
}
int th(char x)
{
    if (x >= 97 && x <= 122)
        return 1;
    return 0;
}
void solve(string s)
{
    stack<char> a;
    vector<char> b;
    for (int i = 0; i < s.length(); i++)
    {

        int x = s[i];
        if (x == '(')
            a.push(x);
        if (x == ')')
        {
            char y = a.top();
            while (y != '(')
            {
                b.push_back(y);
                a.pop();
                y = a.top();
            }
            a.pop();
        }
        if (th(x))
            b.push_back(x);
        if (tt(x))
        {
            if (!a.empty())
            {
                char y = a.top();
                while (priority(y) >= priority(x))
                {
                    b.push_back(y);
                    a.pop();
                    if (a.empty())
                        break;
                    y = a.top();
                }
            }
            a.push(x);
        }
    }
    while (!a.empty())
    {
        char x = a.top();
        b.push_back(x);
        a.pop();
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i];
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;

        solve(s);
    }
}
