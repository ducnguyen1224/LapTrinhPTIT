#include <bits/stdc++.h>
using namespace std;
int t;
string s;
void check_grammar(string grammar)
{
    int dem = 0;
    stack<char> mystack;
    for (char key : grammar)
    {
        if (key == '(')
            mystack.push(key);
        else
        {
            if (mystack.empty())
            {
                mystack.push('(');
                dem++;
            }
            else
                mystack.pop();
        }
    }
    cout << dem + mystack.size() / 2 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        check_grammar(s);
    }
    return 0;
}