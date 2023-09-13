#include <bits/stdc++.h>

using namespace std;

bool isSpecialChar(char c)
{

    return (ispunct(c));
}

int main()
{
    freopen("password.in", "r", stdin);
    freopen("res.out", "w", stdout);
    string s;

    while (cin >> s)
    {
        bool up_char = false;
        bool low_char = false;
        bool num_char = false;
        bool special_char = false;
        bool near_char = true;

        if (s.size() < 8)
        {
            cout << "INVALID"
                   << "\n";
        }
        else
        {
            for (long long i = 0; i < s.size(); ++i)
            {
                if (isupper(s[i]))
                {
                    up_char = true;
                }
                else if (islower(s[i]))
                {
                    low_char = true;
                }
                else if (isdigit(s[i]))
                {
                    num_char = true;
                }
                else if (isSpecialChar(s[i]))
                {
                    special_char = true;
                }
            }

            for (long long i = 0; i < s.size() - 1; ++i)
            {
                if (s[i] == s[i + 1])
                {
                    near_char = false;
                    break;
                }
            }

            if (up_char && low_char && num_char && special_char && near_char)
            {
                cout << "VALID"
                       << "\n";
            }
            else
            {
                cout << "INVALID"
                       << "\n";
            }
        }
    }

    return 0;
}//by to QUYHANA