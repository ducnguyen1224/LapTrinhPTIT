#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]==','){
			s[i] = ' ';
		}
	}
	stringstream ss(s);
	string tmp;
	vector<int> v;
	int res = 1;
	while(ss>>tmp){
		int num = stoi(tmp);
		v.push_back(num);
		res*=num;
	}
	vector<int> v1;
	for(int i=0;i<v.size();i++){
		v1.push_back(res/v[i]);
	}
	for(int i=0;i<v1.size()-1;i++){
		cout<<v1[i]<<",";
	}
	cout<<v1[v.size()-1]<<endl;
	}
	return 0;
}