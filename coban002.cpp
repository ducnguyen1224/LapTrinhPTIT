#include <bits/stdc++.h>
using namespace std;

bool SCP(long long a){
    if(a<1) 
        return false;
    long long i=sqrt(a);
        if(i*i==a) {
            return true;
        i++;
        }
    return false;
}

bool chusoSCP (long long n) {
	while (n) {
		int x=n%10;
		if (x!=0 && x!=1 && x!=4 && x!=9) return false;
		n/=10;
		}
	return true;
}

int main () {
	int count;
	cin >> count;
	while (count--) {
		int n;
		cin >> n;
		if (n==1) cout << "1\n"; else {
				for (long long i=4; i<=pow(10,n)-1; i++) {
					long long num = i*i;
					if (num>=pow(10,n-1) && num<pow(10,n) && SCP(num) && chusoSCP(num)) {
						cout << num << "\n";
						break;
					}
				}
		}
	}
}