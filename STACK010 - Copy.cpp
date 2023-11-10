#include <iostream>

using namespace std;

int clumsy(int n)
{
    if (n <= 2)
    {
        return n;
    }
    else if (n == 3)
    {
        return 6;
    }
    else if (n == 4)
    {
        return 7;
    }
    else
    {
        if (n % 4 == 0)
        {
            return n + 1;
        }
        else if (n % 4 <= 2)
        {
            return n + 2;
        }
        else
        {
            return n - 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int result = clumsy(n);
        cout << result << endl;
    }

    return 0;
}