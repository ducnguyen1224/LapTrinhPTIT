#include<bits/stdc++.h>
using namespace std;
vector<string> buildArray(vector<int>& target, int n) {
     vector<string> str;
     int j =0;
     for(int i =1;i<=n;i++){
         if(target[j]==i){
             str.push_back("Push");
             j++;
         
             if(j==target.size()) break;
         }
         else {
             str.push_back("Push");
             str.push_back("Pop");
         }
         }
     return str; 
    }
std::vector<int> strToVector (string input) {
      vector<int>v;
    string tmp="";
    for(char c:input){
      if(c==','){
        int value=stoi(tmp);
        v.push_back(value);
        tmp="";
      }
      else{
        tmp+=c;
      }
    }
    v.push_back(stoi(tmp));
    return v;
    }
string vectorToString (vector<string> input){
          string ans="";
          for(int i=0;i<input.size()-1;i++){
               ans+=input[i]+",";
          }
          ans+=input[input.size()-1]+"\n";
          return ans;
}
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    int n;
    string s;
    cin>>s>>n;
    vector<int>v=strToVector(s);
    vector<string>v1=buildArray(v,n);
    string res=vectorToString(v1);
    cout<<res;
  }
  //system("pause");
}