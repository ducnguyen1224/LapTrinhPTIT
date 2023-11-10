#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
ull dequy(ull n){
	if(n<2){
		return n;
	}
	ull res = 0;
	res = 1+min(n%3+dequy(n/3),n%2+dequy(n/2));
	return res;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		ull n;cin>>n;
	cout<<dequy(n)-1<<endl;
	}
	return 0;
}