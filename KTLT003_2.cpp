#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		double tg=0;
		long gt=1;
		for(float i=1;i<=n;i++){
			gt*=i;
			tg=pow(tg+gt,1/(i+1));
		}
		cout<<fixed<<setprecision(3)<<tg<<" "<<endl;
	}
	return 0;
}