#include <iostream>
#include <math.h>
using namespace std;
int socp[1000], s,dem;
void up(int n,int x) {
    for (int i = x; i < s; i++) {
        n -= socp[i];
        if (n == 0) dem++;
        else {
            if (n > 0) up(n, i);
            else break;
        }n += socp[i];
    }
}

int main()
{
    s = 0;
    for (int i = 1; i*i <= 500; i++) {
        socp[s++] = i * i;
    }
    int t; cin >> t;
    while (t--) {
        int n;
        dem = 0;
        cin >> n;
        up(n, 0);
        cout << dem << endl;
    }
}
