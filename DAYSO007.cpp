#include <bits/stdc++.h>
#define MAX 500
using namespace std;

int D[MAX][10 * MAX]; 

int demNhom (int curr_pos, int curr_sum, int N, char * num){
	if (curr_pos == N)
		return 1;
	if (D[curr_pos][curr_sum] != -1)
		return D[curr_pos][curr_sum];
		
	D[curr_pos][curr_sum] = 0;
	int sum = 0;
	int temp = 0;
	
	for (int i = curr_pos; i < N; i++){
		sum += (num[i] - 48);
		if (sum >= curr_sum)
			temp += demNhom(i+1, sum, N, num); 
	}
	
	D[curr_pos][curr_sum] = temp;
	
	return temp;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int N;
		cin >> N;
		char num[MAX + 1];
		for (int i = 0; i < N; i++){
			cin >> num[i];
		}
		num[N] = '\0'; //ki tu ket thuc xau
		memset(D, -1, sizeof(D));
		cout << demNhom(0, 0, N, num) << endl;
	}
	return 0;
}
