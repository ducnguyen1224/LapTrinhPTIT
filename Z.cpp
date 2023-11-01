#include <iostream>
#include <vector>
using namespace std;

int arraySum(vector<int> vct, int size) {
    // Base case: nếu size = 0, trả về 0
    if (size == 0) {
        return 0;
    }
    
    // Trường hợp đệ quy: Tính tổng các phần tử từ 0 đến size - 1 và cộng thêm phần tử cuối cùng
    return arraySum(vct, size - 1) + vct[size - 1];
}

int main() {
    int n;
    cin >> n; // Nhập số lượng testcase
    
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size; // Nhập kích thước của mảng
        vector<int> vct(size);
        
        for (int j = 0; j < size; j++) {
            cin >> vct[j]; // Nhập các phần tử của mảng
        }
        
        // Gọi hàm arraySum để tính tổng và in kết quả
        int sum = arraySum(vct, size);
        cout << sum << endl;
    }
    
    return 0;
}
