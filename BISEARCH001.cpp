#include <bits/stdc++.h>
#define ll int
using namespace std;

// Hàm tìm kiem nhi phan su dung giai thuat de quy
int binarySearch(int a[], int l, int r, int x) {
    while (r >= l) {
        int mid = l + (r - l) / 2; // Tuong duong (l+r)/2 nhung uu diem tránh tràn su khi l,r lon
    
        // Neu arr[mid] = x, tra ve chi so và ket thúc.
        if (a[mid] == x && a[mid-1]!=x)
            return mid;
    
        // Neu arr[mid] < x, thuc hien tìm kiem nua phai cua mang
        if (a[mid] < x){
            l=mid+1;
        } else {
        // Neu arr[mid] > x, thuc hien tìm kiem nua trái cua mang    
            r=mid-1;
        }
    }
 
    // Neu không tìm thay
    return -1;
}

int main(){
    ll n,m,x;
    cin >> n >> m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin >> b[i];
    }
    for(ll j=0;j<m;j++)
    {
       
        if (binarySearch(a,0,n-1,b[j]) != -1)
        {
            cout << binarySearch(a,0,n-1,b[j])+1 << " " ;
        } else {
            cout << 0 << " " ;
        }
    }
    return 0;
}
