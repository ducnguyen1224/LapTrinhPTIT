#include<bits/stdc++.h>
using namespace std;
long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int mini=-1;
        int maxi=-1;
        long long ans=0;
        int st=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<minK || nums[i]>maxK){
                mini=-1;
                maxi=-1;
                st=i+1;
            }
            if(nums[i]==minK){
                mini=i;
            }
            if(nums[i]==maxK){
                maxi=i;
            }
            
            ans+=max(0,min(mini,maxi)-st+1);

        }
        return ans;
    }
    int main(){
      int t;
      cin>>t;
      cin.ignore();
      while(t--){
        string s;
        int k1,k2;
        cin>>s>>k1>>k2;
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
        cout<<countSubarrays(v,k1,k2)<<"\n";
      }
      //system("pause");
    }