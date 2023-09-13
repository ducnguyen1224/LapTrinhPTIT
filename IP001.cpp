#include <bits/stdc++.h>
using namespace std;

 
int is_valid(string ip){
	vector<string> ips;
	stringstream ss (ip);
	string token;
	while(getline(ss,token,'.')){
		ips.push_back(token);
	}
	for(int i = 0; i < ips.size();i++){
		if(ips[i].length() > 3 
		|| stoi(ips[i]) < 0
		|| stoi(ips[i]) > 255)
		return 0;
		if(ips[i].length() > 1
		 && stoi(ips[i]) == 0)
		return 0;
		if(ips[i].length() > 1 
		&& stoi(ips[i]) != 0 
		&& ips[i][0] == '0')
		return 0;
	}
	return 1;
}
int dem(string ip){
	int l = ip.length();
	int count  = 0;
	string check = ip;
	for(int i = 1;i < l-2; i++){
		for(int j = i+1; j < l-1;j++){
			for(int k = j +1 ; k < l ; k++){
				check = check.substr(0,k) + "." + check.substr(k);
				check = check.substr(0,j) + "." + check.substr(j);
				check = check.substr(0,i) + "." + check.substr(i);
				if(is_valid(check)) count ++;
				check = ip;
			}
		}
	}
	return count;
}
int main(){
	int t; 
    cin >> t;
	while(t--){
		string ip;
		cin >> ip;
		cout << dem(ip) << endl;
	}
	return 0;
}