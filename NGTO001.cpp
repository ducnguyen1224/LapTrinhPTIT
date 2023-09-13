#include<iostream>
#include<math.h>
using namespace std;
// Kiem tra so nguyen to
int snt(int a)
{
    if(a == 0 || a == 1)
    {
        return 0;
    }
    for(int i = 2; i <= sqrt(a); i ++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
// Tat ca phan tu deu la so nguyen to
int allsnt(int a)
{
    int count;
    int dem1 = 0, dem2 = 0; //dem1 dem so luong so, dem2 dem so luong so la snt
    while (a > 0)
    {
        count = a % 10;
        if(snt(count) == 1)
        {
            dem2 ++;
        }
        a /= 10;
        dem1 ++;
    }
    if(dem1 == dem2)
    {
        return 1;
    }
    return 0;
}
//So luong snt nho hon n
void sl(int n)
{
    int count = 0;
    for(int i = 2; i <= n; i ++)
    {
        if(allsnt(i) == 1 && snt(i) == 1)
        {
            count ++;
        }
    }
    cout << count << endl;
}
int main()
{
    int test,n;
    cin >> test;
    while(test --)
    {
        cin >> n;
        sl(n);
    }
    return 0;
}