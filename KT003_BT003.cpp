#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long 
string multi(string num1,string num2){
	int n = num1.size();
	int m = num2.size();
	string res(n+m,'0');
	for(int i=n-1;i>=0;i--){
		int mer = 0;
		for(int j=m-1;j>=0;j--){
			int tmp = (num1[i]-'0')*(num2[j]-'0')+(res[i+j+1]-'0')+mer;
			res[i+j+1] = (tmp%10 + '0');
			mer = tmp/10;
		}
		res[i]+=mer;
	}
	size_t pos = res.find_first_not_of('0');
	if(pos!=string::npos){
		return res.substr(pos);
	}
	return "0";
}
string nhan(int n,int k,int m){
	string tmp = "1";
	for(int i=1;i<=k;i++){
		string res = multi(tmp,to_string(n));
		tmp = res;
	}
	string dem = tmp.substr(0,m);
	return dem;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k,m;cin>>n>>k>>m;
	cout<<nhan(n,k,m)<<endl;
	}
	return 0;
}