#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int arraySum(std::vector<int>& vct, int size) {
    // Điều kiện dừng của đệ quy: nếu size == 0, tức là đã duyệt hết mảng
    if (size == 0) {
        return 0;
    } else {
        // Tổng của các phần tử từ 0 đến size - 1 là tổng của phần tử cuối cùng và tổng của các phần tử từ 0 đến size - 2
        return vct[size - 1] + arraySum(vct, size - 1);
    }
}

// Hàm chuyển đổi chuỗi thành vector<int>
std::vector<int> stringToVector(std::string input) {
   vector<int> result;
   stringstream ss(input);
    int number;
    char comma;
    while (ss >> number) {
        result.push_back(number);
        ss >> comma;
    }
    return result;
}

int main() {
    int t;
   cin >> t;

    for (int i = 0; i < t; ++i) {
       string s;
       cin >> s;

       vector<int> vct = stringToVector(s);
        int sum = arraySum(vct, vct.size());
        
       cout << sum <<endl;
    }

    return 0;
}
