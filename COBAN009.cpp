#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >>t;
	while (t--) {
		string str;
		cin >>str;
		int n=0;
		for (int i=0; i<str.size(); i++)
			if (str[i]>=48 &&str[i]<=57) 
				n++;
		cout <<n<<endl;
	}
	return 0;
}
