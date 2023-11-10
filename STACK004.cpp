#include <iostream>
#include <string>
#include <stack>
using namespace std;
string makeGood(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (!st.empty() && abs(st.top() - c) == 'a' - 'A')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    string result = "";
    while (!st.empty())
    {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character

    for (int i = 0; i < t; ++i)
    {
        string s;
        getline(cin, s);

        string cleaned = makeGood(s);
        cout << cleaned << endl;
    }

    return 0;
}
