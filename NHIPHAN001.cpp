#include<bits/stdc++.h>

using namespace std;

unsigned long long binary_to_decimal(string binary)
{
 long long decimal = 0;
    for (int i = 0; i < binary.size(); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;

     long long decimal_a = binary_to_decimal(a);
     long long decimal_b = binary_to_decimal(b);
     long long result;
        if (decimal_a == decimal_b)
            result = 0;
        else
            result = abs(decimal_b - decimal_a) - 1;

        cout << result << "\n";
    }
    return 0;
}