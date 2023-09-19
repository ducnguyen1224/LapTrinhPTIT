#include <iostream>
using namespace std;
 

#define MAX 100000

long long multiply(long long  x, long long res[], long long res_size) {
 

long long carry = 0;
 

for (long long i = 0; i < res_size; i++) {
    long long prod = res[i] * x + carry;
 
   
    res[i] = prod % 10;
 
    carry = prod / 10;
}
 

while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
}
return res_size;
}
 

void power(long long x, long long n)
{
 
if(n == 0 ){
    cout<<"1" << endl;
    return;
}
if (x == 0){
	cout << "0" << endl;
	return;
}
 
 
long long res[MAX];
long long res_size = 0;
long long temp = x;
 
while (temp != 0) {
    res[res_size++] = temp % 10;
    temp = temp / 10;
}
 

for (int i = 2; i <= n; i++)
    res_size = multiply(x, res, res_size);
 
for (int i = res_size - 1; i >= 0; i--)
    cout << res[i];
    cout << endl;
}
 
int main() {
	int t;
	cin >> t;
	while (t--){
		long long exponent;
		long long base;
		cin >> base >> exponent;
		power(base, exponent);
}
	return  0;
}