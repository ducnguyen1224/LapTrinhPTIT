#include <bits/stdc++.h>

using namespace std;
void batdau(){
      <int> vector 
      int n;
        cin >> n;
   
      d[0] = 1;
    for (int i = 1; i * i <= 10000; i++) {
        for (int j = i * i; j <= 10000; j++) {
            d[j] += d[j - i * i];
        }
    }
    cout<<d[n];

}
int main() {
 
    int t;
    cin >> t;
    while (t--) {
      batdau();
    }

    return 0;
}
