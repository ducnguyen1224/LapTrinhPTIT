#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int t;
     cin>>t;
     while(t--){
     	float x;
     	int n;
     	cin>>n>>x;
     	float tich=1;
     	float ans=0;
     	for(int i=1;i<=n;i++){
     		tich*=x;
     		ans=sqrt(tich+ans);
     		
		 }
		 printf("%.3f\n",ans);
	 }

   return 0;
}