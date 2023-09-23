#include <iostream>
#include <string>
using namespace std;

string subtractWithNineComplement(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    
    // Đảm bảo str1 luôn dài hơn hoặc bằng str2
    if (len1 < len2) {
        swap(str1, str2);
        swap(len1, len2);
    }
    
    // Thêm số 0 vào phía trước chuỗi str2 để đảm bảo độ dài bằng nhau
    while (str2.length() < len1) {
        str2 = "0" + str2;
    }
    
    string result = "";
    int borrow = 0; // Biến nhớ khi trừ
    for (int i = len1 - 1; i >= 0; i--) {
        int digit1 = str1[i] - '0';
        int digit2 = str2[i] - '0';
        
        int diff = (digit1 - digit2 - borrow + 10) % 10;
        result = to_string(diff) + result;
        
        borrow = (digit1 < digit2 + borrow) ? 1 : 0;
    }
    
    return result;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string str1, str2;
        cin >> str1 >> str2;
        
        string result = subtractWithNineComplement(str1, str2);
        cout << result << endl;
    }
    
    return 0;
}
