#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s; // Nhập chuỗi

        string temp; // Chuỗi tạm thời để lưu kết quả
        for (char c : s)
        {
            // Nếu chuỗi tạm thời không rỗng và cùng với ký tự hiện tại tạo thành chuỗi con "AB" hoặc "CD"
            // Loại bỏ chuỗi con "AB" hoặc "CD" bằng cách giảm độ dài của chuỗi tạm thời
            if (!temp.empty() && ((temp.back() == 'A' && c == 'B') || (temp.back() == 'C' && c == 'D')))
            {
                temp.pop_back();
            }
            else
            {
                temp.push_back(c); // Thêm ký tự vào chuỗi tạm thời
            }
        }

        cout << temp.length() << endl; // In ra độ dài của chuỗi tạm thời
    }

    return 0;
}