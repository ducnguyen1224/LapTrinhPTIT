#include <bits/stdc++.h>
#define ll long long
const int MOD=1e9+7;
using namespace std;
int t, n, k, x, y, visited[20][20];
int l[]={-2,-2,-1,-1,1,1,2,2};
int r[]={-1,1,-2,2,-2,2,-1,1};
bool check(int x, int y, int n){
  if(1<=x && x<=n && 1<=y && y<=n) return true;
  return false;
}
void Try(int a, int b, int step){
  if(step==k+1) return;
  visited[a][b]=1;
  for(int i=0; i<=7; ++i){
    if(check(a+l[i],b+r[i],n)==true){
      Try(a+l[i],b+r[i],step+1);
    }
  }
}
int main () {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	  cin >> t;
	  while(t--){
	    cin >> n >> k >> x >> y;
	    for(int i=1; i<=n; i++){
	    	for(int j=1; j<=n; j++){
	    		visited[i][j]=0;
			}
		} 
	    Try(x,y,0);
	    int ans=0;
	    for(int i=1; i<=n; i++){
	    	for(int j=1; j<=n; j++){
	    		if(visited[i][j]==1) ans++;
			}
		} 
	    cout<<ans<<endl;
	  }
	return 0;
}