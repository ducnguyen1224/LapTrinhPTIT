#include<bits/stdc++.h>
using namespace std;
#define ll long long 
string multiply(string a,string b){
	int n1=a.size();
	int n2=b.size();
	string ans(n1+n2,'0');
	for(int i=n1-1;i>=0;i--){
		int nho=0;
		for(int j=n2-1;j>=0;j--){
			int so=(a[i]-'0')*(b[j]-'0')+(ans[i+j+1]-'0')+nho;
			nho=so/10;
           ans[i+j+1]=(char)(so%10+'0');
		}
		ans[i]+=nho;
	}
	while(ans[0]=='0'&&ans.size()>1){
		ans.erase(0,1);
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n==0&&k==0){
			cout<<"1"<<"\n";
		}
		else{
		int c=n-k+1;
		string ans="1";
		for(int i=c;i<=n;i++){
			string tmp=to_string(i);
			ans=multiply(ans,tmp);
		}
		cout<<ans<<"\n";
	}
	}
}