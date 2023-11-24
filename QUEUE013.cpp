#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
     string s1,s2;
     cin>>s1>>s2;
     string tmp1="",tmp2="";
     vector<int>v1,v2,v3;
     for(char c:s1){
      if(c==','){
        v1.push_back(stoi(tmp1));
        tmp1="";
      }
      else{
        tmp1+=c;
      }
     }
     v1.push_back(stoi(tmp1));
     for(char c:s2){
      if(c==','){
        v2.push_back(stoi(tmp2));
        tmp2="";
      }
      else{
        tmp2+=c;
      }
     }
     v2.push_back(stoi(tmp2));
     for(int x:v1){
      if(count(v2.begin(),v2.end(),x)!=0&&count(v3.begin(),v3.end(),x)==0){
        v3.push_back(x);
      }
     }

     int l3=v3.size();
     if(l3!=0){
     for(int i=0;i<l3-1;i++){
      cout<<v3[i]<<",";
     }
     cout<<v3[l3-1]<<"\n";
     }
     else{
      cout<<"\n";
     }
  }
  //system("pause");
}