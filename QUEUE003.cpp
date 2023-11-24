#include<bits/stdc++.h>
using namespace std;
int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        queue<int> q;
        int n=tickets.size();
        for(int i=0;i<n;i++) q.push(i);

        while(true)
        {
            if(tickets[k]==0) break;
            int curr=q.front();
            time++;
            tickets[curr]--;
            q.pop();
            if(tickets[curr]!=0) 
            {
                q.push(curr);
            }
        }
        return time;
    }
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    int k;
    cin>>s>>k;
    vector<int>v;
    string tmp="";
    for(char c:s){
       if(c==','){
        v.push_back(stoi(tmp));
        tmp="";
       }
       else{
        tmp+=c;
       }
    }
    v.push_back(stoi(tmp));
    cout<<timeRequiredToBuy(v,k)<<"\n";
  }
  //system("pause");

}