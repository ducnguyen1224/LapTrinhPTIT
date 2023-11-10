
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100001
int main(){
     int t;
     cin>>t;
     while(t--){
     string s;
     cin>>s;
     if(s==""){
     	cout<<"0\n";
	 }
	 else{
     int a[MAX];
     memset(a,0,sizeof(a));
     
     string tmp="";
     for(char c:s){
     	if(c==','){
     		a[stoi(tmp)]++;
     		tmp="";
		 }
		 else{
		 	tmp+=c;
		 }
	 }
	  a[stoi(tmp)]++;
	 for(int i=0;i<MAX;i++){
	 	if(a[i]==0){
	 		cout<<i<<"\n";
	 		break;
		 }
	 }
	}
	 }

   return 0;
}