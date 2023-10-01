#include <bits/stdc++.h>
using namespace std;
 
int DayConDonDieuTangDaiNhat(std::vector<int>& v)
{
    if (v.size() == 0) 
        return 0;
 
    std::vector<int> tail(v.size(), 0);
    int length = 1; 
    tail[0] = v[0];
 
    for (int i = 1; i < v.size(); i++) {

        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
 
    return length;
}
 
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		
    	std::vector<int> v;
    	for (int i = 0; i < n; i++){
    		int b;
    		cin >> b;
    		v.push_back(b);
		}
    	cout << DayConDonDieuTangDaiNhat(v) << endl;
    }
    return 0;
}