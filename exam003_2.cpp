#include <bits/stdc++.h>
using namespace std;
string intToExcelColumn(long long i)
{
    string column = "";
    while (i > 0)
    {
        long long  remainder = (i - 1) % 26;
        column = char('A' + remainder) + column;
        i = (i - 1) / 26;
    }
    return column;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long  t;
    while (cin >> t)
    {
        cout << intToExcelColumn(t) << "\n";
    }

    return 0;
}