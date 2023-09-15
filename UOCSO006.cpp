#include <bits/stdc++.h>
using namespace std;

long long sum (long long n){
	long long sum = 0;
	for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) {
        if (i * i == n)
            sum += i; 
        else
            sum += i + n / i; 
    }
	return sum + 1; 
}

bool soBanBe (long long a, long long b){
	return (sum(a) == b && sum(b) == a);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long a,b;
		cin >> a >> b;
		if (soBanBe(a,b)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}