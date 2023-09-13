#include <bits/stdc++.h>
using namespace std;

// Hàm in ket qua cua binh phuong n so 1 voi n>9:
void lon_hon_9(int n, bool mot = 1){   

    if(n > 9){
    	cout << "123456790";   
    	lon_hon_9(n - 9, 0);    
    	cout << "098765432";    
    	if(mot) cout << '1';    
    }
    
    else{
        // Sau khi in n / 9 l?p cu?i cùng in l?p chính gi?a
        if(n == 1) return;
        for(int i = 1; i <= n; i++){
        	cout << i;
		}
		
        for(int i = n - 1; i > 1; i--){      // Không in s? 1 ? n?a sau ð?i x?ng;
            cout << i;
        }
        return;
    }
}


// Ham in ket qua cua n so 1 binh phuong (n<9)
void nho_hon_9(int n){
    if(n == 1){     // Binh phuong cua 11 bang 11
        cout << 11;
        return;
    }

    for(int i = 1; i <= n; i++){
        cout << i;
    }

    for(int i = n - 1; i > 0; i--){
        cout << i;
    }
    return;
}

int main()
{   
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n; 
        if(n > 9) lon_hon_9(n);
        else nho_hon_9(n);
        cout << endl;
    }
    return 0;
}