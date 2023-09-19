#include<bits/stdc++.h>
#define MAX	100000
using namespace std;

long search(long x, long a[], long low, long high){
	long pos = 0;
	
	if(a[low] > x || a[high] < x) return pos;
	
	while (low<=high){
	
		long mid = (low+high )/2;
	
		if(x==a[mid]){
			while(mid>=low && a[mid-1]==x) mid--;
		
			pos = mid;
			break;
		}
	
		if(x<a[mid]){
			high = mid-1;
		}else
			low=mid+1;
	}
	return pos;
}

void sortArr(long arr[], int chiso[], int n)
{
    vector<pair<long, int> > vp;
    for (int i = 0; i < n; ++i) {
        vp.push_back(make_pair(arr[i+1], i+1));
    }
  
    sort(vp.begin(), vp.end());

    for (int i = 0; i < vp.size(); i++) {
    	arr[i+1] = vp[i].first;
		chiso[i+1] = vp[i].second;
	}
}


int main(){
	
	long a[MAX], b;
	int chiso[MAX];

	long n, m; cin>>n>>m;

	chiso[0]=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		chiso[i] = i;	
	}
	
	sortArr(a, chiso, n);
		
	for(int i=1; i<=m; i++){
		cin>>b;
		cout<<chiso[search(b, a, 1, n)]<<" ";		
	}
	cout<<endl;
	
	return 0;
}