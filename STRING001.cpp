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
        size_t end = s.find('"', begin + 1);
        string child = s.substr(begin + 1, end - begin - 1);
        begin = s.find('"', end + 1);
        end = s.find('"', begin + 1);
        string parent = s.substr(begin + 1, end - begin - 1);
    
        if (child.size() == 0 || parent.size() == 0)
            cout << 0 << "\n";
        else
        {
            size_t find_child = parent.find(child);

            if (find_child == string::npos)
            {//
                cout << -1 << "\n";
            }
            else
                cout << parent.find(child) << "\n";
        }
    }
    return 0;
}