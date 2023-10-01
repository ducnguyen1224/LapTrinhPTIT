#include<bits/stdc++.h>
using namespace std;
bool ss(string a,string b){
    string ab=a+b;
    string ba=b+a;
    if(ab.compare(ba)>0)
        return true ;
    return false;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<string> luu;
        cin.ignore();
        while(n--){
            string s;
            cin>>s;
            luu.push_back(s);
        }
        sort(luu.begin(),luu.end(),ss);
        for(int i=0;i<luu.size();i++)
            cout<<luu[i];
        cout<<endl;
    }
    return 0;
}