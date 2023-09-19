#include <bits/stdc++.h>
using namespace std;
    
int main () {
	int t;
	cin >>t;
	while (t--) {
		long long n;
		int demso[100]={0};
		int giatri[100];
		long long final=0;
		int k=2;
		int dem=0;
		cin >>n;
		if (n%2==0) {
			giatri[1]=2;
			dem=dem+1;
			int dem2=0;
			while (n%2==0) {
			dem=1;	
				demso[1]++;
				n=n/2;
			}		
		}
		if (n>1) {
			for (long long i=3; i<sqrt(n)+1; i+=2) {
				if (n%i==0) {
					dem=dem+1;
					giatri[k]=i;
					while (n%i==0) {
						demso[k]=demso[k]+1;
						n=n/i;
					}
					k++;
				}
				if (n<=1) break;	
			}
		}
		if (n>1) {
			dem++;
			final=1;
		}
		cout <<dem<<endl;
		if (demso[1]) cout <<"2 "<<demso[1]<<endl;
		for (int j=2; j<k; j++) 
		if (giatri[j]) 
		cout <<giatri[j]<<" "<<demso[j]<<endl;
		if (final) 
		cout<<n<<" 1"<<endl;
	}
return 0;
}