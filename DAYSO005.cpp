#include<bits/stdc++.h>
using namespace std;
void check (int arr[], int n){
	int count = 0;
	if (arr[n-1] != arr[n-2]) count ++;
	if (arr[0] != arr[1]) count ++;
	for (int i = 1; i < n-1; i++)
		if (arr[i] != arr[i-1] && arr[i] != arr[i+1])
			count ++;
	
	cout << count << endl;
}

int main (){
int t;
cin >>t;
while (t--){
    int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++)
    cin>>arr[i];
    sort (arr,arr+n);
check(arr,n);

}
    return 0;
}