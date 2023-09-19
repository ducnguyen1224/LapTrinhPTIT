#include<iostream>
using namespace std;
 
// Ham tra ve tong so FIBONACCI chan nho hon N
long long tong_Fibo_chan(long long N)
{
    if (N < 2)
        return 0;
 
    // Khoi tao hai SNT chan dau tien
    // tinh tong cua cung
    long long int ngto1 = 0, ngto2 = 2;
    long long int sum = ngto1 + ngto2;
 
    // Tinh tong gia tri cac so Fibonacci chan
    while (ngto2 <= N)
    {
        // Nhan gia tri chan tiep theo cua day Fibonacci
        long long int ngto3 = 4*ngto2 + ngto1;
 
        // Neu vuot qua N thì thoat vong lap
        if (ngto3 > N)
            break;
 
        // Chuyen den so chan tiep theo va cap nhat Tong
        ngto1 = ngto2;
        ngto2 = ngto3;
        sum += ngto2;
    }
    return sum;
}
 

int main (){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		cout << tong_Fibo_chan(n) << endl;
	}
	return 0;
}