#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
 
int main() {
	int st, t;
	scanf("%d", &st);
	for(t=1;t<=st;++t) {
		long long L, R;
		cin >> L >> R;
		for(int k=40;k>=1;--k) {
			long long left = 0, right = (long long)(pow( R, 1.0 / k) + 10);
			while(left<right) {
				long long mid = (left+right)/2;
				long long z = 1;
				for(int i=0;i<k;++i) {
					z *= mid;
					if(z>=L) break;
				}
				if(z>=L) right = mid;
				else left = mid+1;
			}
			long long z = 1;
			for(int i=0;i<k;++i) {
				z *= left;
				if(z>R) break;
			}
			if(L<=z && z<=R) {
				printf("%d\n", k);
				break;
			}
		}
	}

	return 0;
}