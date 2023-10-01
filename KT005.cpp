#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
	vector<char> v;
	for(int i=0;i<s.length();i++){
		s[i] = tolower(s[i]);
	}
	for(int i=0;i<s.length();i++){
		auto it = lower_bound(v.begin(),v.end(),s[i]);
		if(it==v.end()){
			v.push_back(s[i]);
		}
		else{
			*it = s[i];
		}
	}
	cout << v.size() <<endl;
	}
	return 0;
}