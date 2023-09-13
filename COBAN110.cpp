#include<stdio.h>
#include<vector>
using namespace std;
typedef unsigned long long ull;
const ull INF=1e19+1;
ull pr[]={0,2,3,5,7,11,13,17,19,23,29,31};
vector<ull> p[15];
int n,i,j,k;
ull f[15][1111];
int main(void)
{	
    
    for (i=1;i<=11;i=i+1)
        {
         p[i].push_back(1);
         p[i].push_back(pr[i]);
         while (p[i][p[i].size()-1]>p[i][p[i].size()-2])
               {
                k=p[i].size()-1;
                p[i].push_back(p[i][k]*pr[i]);               
               }
        } 
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    for (i=1;i<=n;i=i+1)
        {
         if (i-1>=p[1].size()-1) f[1][i]=INF;
         else f[1][i]=p[1][i-1];
        }
    for (i=2;i<=11;i=i+1)
        for (j=1;j<=n;j=j+1)
            {
             f[i][j]=INF;
             for (k=1;k<=j;k=k+1)
                 if (j%k==0)
                    if ((k-1<p[i].size()-1) && (f[i-1][j/k]<INF))
                       if ((f[i-1][j/k]*p[i][k-1])%f[i-1][j/k]==0)
                          if (f[i][j]>f[i-1][j/k]*p[i][k-1])
                             f[i][j]=f[i-1][j/k]*p[i][k-1];                       
            }
    printf("%llu\n",f[11][n]);
    }
}//code di cop 