#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
	int k;cin>>k;
	vector<int> v;
	for(int i=0;i<s.size();i++){
		if(s[i]!=','&&s[i]!='-'){
			int tmp = s[i] - '0';
			if(i>0){
				if(s[i-1]=='-'){
					tmp*=-1;
				}
			}
			v.push_back(tmp);
		}
	}
	vector<int> res;
	for(int i=0;i<v.size()-k+1;i++){
		int tmp = INT_MIN;
		for(int j=i;j<i+k;j++){
			tmp = max(tmp,v[j]);
		}
		res.push_back(tmp);
	}
	for(int i=0;i<res.size()-1;i++){
		cout<<res[i]<<",";
	}
	cout<<res[res.size()-1]<<endl;
	}
	return 0;
}