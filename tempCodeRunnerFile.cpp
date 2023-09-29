#include <bits/stdc++.h>
using namespace std;
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
        stack<char> a;
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i];
            if (a.empty() && x == ')')
            {
                x == '(';
                a.push(x);
                dem++;
            }
            else if (x == '(')
                a.push(x);
            else if (x == ')')
            {
                if (!a.empty())
                    a.pop();
            }
            if (x == '(' && i == s.length() - 1)
            {
                while (!a.empty())
                {
                    a.pop();
                    dem++;
                    if (a.empty())
                        break;
                    a.pop();
                }
            }
        }
        while (!a.empty())
        {
            a.pop();
            dem++;
            if (a.empty())
                break;
            a.pop();
        }
        cout << dem << endl;
    }
}