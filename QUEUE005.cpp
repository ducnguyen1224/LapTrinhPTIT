#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
	int k;cin>>k;
	vector<char> v;
	for(int i=0;i<s.size();i++){
		if(s[i]!=','){
			v.push_back(s[i]);
		}
	}
	int dem = 0;
	for(int i=0;i<v.size()-k+1;i++){
		if(v[i]=='0'){
			for(int j=i;j<i+k;j++){
				if(v[j]=='0'){
					v[j] = '1';
				}
				else{
					v[j] = '0';
				}
			}	
			dem++;
		} 
	}
	bool check = true;
	for(auto it : v){
		if(it=='0'){
			cout<<"-1"<<endl;
			check = false;
			break;
		}
	}
	if(check){
		cout<<dem<<endl;
	}
	}
	return 0;
}