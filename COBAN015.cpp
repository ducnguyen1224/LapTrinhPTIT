#include <bits/stdc++.h>
#define MAX 50
#define ll  long long
using namespace std;

int arr[MAX];  
int n, k;

ll gt(int n) {
    ll s = 1;
    for (int i = 1; i <= n; i++)
        s *= i;
    return s;
}

ll sumKey(int n, int k) {
    return  gt(n) / (gt(k)*gt(n - k));
}

void res() {
    cout << "[";
    for (int i = 1; i <= k; i++){
        cout << arr[i];
        if(i < k) cout << " ";
    }
    cout << "]";
    cout << endl;
}

void key(int i) {
    for (int j = arr[i-1] + 1; j <= n-k+i; j++)  
    {
        arr[i] = j;
        if (i == k) {
            res();
        }
        else{
            key(i + 1);  
        }
    }
}

int main() {
    int t;
	cin >> t;
	while(t--)
    {  
        cin >> n >> k;
        cout << sumKey(n, k) << endl;
        key(1);
    }
    return 0;  
}