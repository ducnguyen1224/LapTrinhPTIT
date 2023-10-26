#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s,t;cin>>s>>t;
	queue<char> q;
	queue<char> q1;
	for(int i=0;i<s.size();i++){
		if(s[i]!=','){
			q.push(s[i]);
		}
		if(t[i]!=','){
			q1.push(t[i]);
		}
	}
	for(int i=0;i<1000;i++){
		if(!q.empty()&&!q1.empty()&&q.front()==q1.front()){
			q.pop();
			q1.pop();
		}
		else if(!q.empty()&&q.front()!=q1.front()){
			char c = q.front();
			q.pop();
			q.push(c);
		}
	}
	cout<<q.size()<<endl;
	}
	return 0;
}