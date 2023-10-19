#include<cstdio>
#include<cstring>
#include<deque>
#include<algorithm>
using namespace std;
 
const int MAX = (int) 7e5;
bool p[MAX + 1];
int P[50000], n, k;
char s[300000], res[300000];
 
void eratos() {
	memset(p, -1, sizeof p); p[0] = p[1] = 0;
	for(int i = 2; i * i <= MAX; ++i) if(p[i])
		for(int j = i+i; j <= MAX; j += i) p[j] = 0;
	for(int cnt = 0, i = 0; i <= MAX && cnt < 50000; ++i)
		if(p[i]) P[cnt++] = i;
}
 
void create() {
	char * t = s;
	for(int i = 0, k; i < n; ++i) sprintf(t, "%d%n", P[i], &k), t += k; 
}
 
void solve() {
	deque<int> q; int b = 0, e = k, l = strlen(s);
	for(int i = 0, cnt = 0; i < l && cnt < l - k; ++i) {
		while(!q.empty() && s[q.back()] < s[i]) q.pop_back(); q.push_back(i);
		if(i == e) {
			while(!q.empty() && q.front() < b) q.pop_front();
			res[cnt++] = s[q.front()];
			b = q.front() + 1; e = min(k + cnt, l - 1);
		}
	}
	puts(res);
}
 
int main() {
	eratos();
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%d%d",&n,&k);
	create();
	solve();
	}
	return 0;
}