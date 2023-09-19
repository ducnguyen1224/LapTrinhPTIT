#include<iostream>
using namespace std;
 
int tong_lon_nhat_cua_day_con(int a[], int n)
{
   int max_so_far = a[0];
   int maxHientai = a[0];
 
   for (int i = 1; i < n; i++)
   {
        maxHientai = max(a[i], maxHientai+a[i]);
        max_so_far = max(max_so_far, maxHientai);
   }
   return max_so_far;
}
 

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int gt_Daycon_max = tong_lon_nhat_cua_day_con(a,n);
		cout << gt_Daycon_max << endl;
	}
	return 0;
}