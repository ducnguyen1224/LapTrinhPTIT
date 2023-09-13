#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; 
	cin>>t;
	while(t--){
		int n;
		float x;
		cin>>n>>x;
		double s=0;
		for(int i=1;i<=n;i++){
			float m=pow(x,i);
			s=sqrt(m+s);
		}
		cout<<fixed<<setprecision(3)<<s<<endl;
	}
	return 0;
}