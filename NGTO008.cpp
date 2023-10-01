#include <bits/stdc++.h>
using namespace std;
 

vector<int> Timtapcon;
vector<int> prime;
bool check = false;
bool isPrime(int x)
{

    int a = sqrt(x);
    bool flag = true;
 
    if (x == 1)
        return false;
    for (int i = 2; i <= a; i++)
        if (x % i == 0)
            return false;
 
    return true;
}
 
// Ham in ra man hinh bo N so Nguyen to thoa man
void display()
{
    int length = Timtapcon.size();
    for (int i = 0; i < length; i++)
        cout << Timtapcon[i] << " ";
    cout << "\n";
}
 

void primeSum(int total, int N, int S, int index)
{

    if (total == S && Timtapcon.size() == N)
    {
		check = true;
        display();
        return;
    }
 

    if (total > S || index == prime.size())
        return;
 
    Timtapcon.push_back(prime[index]);
 
    primeSum(total+prime[index], N, S, index+1);
 
    Timtapcon.pop_back();
 
    primeSum(total, N, S, index+1);
}
 

void allPrime(int N, int S, int P)
{
    
    for (int i = P+1; i <=S ; i++)
    {
        
        if (isPrime(i))
            prime.push_back(i);
    }
 
    if (prime.size() < N)
        return;
    primeSum(0, N, S, 0);
}
 

int main()
{
    int P, N, S;
    cin >> P >> N >> S;
    allPrime(N, S, P);
	if(!check) cout << -1;
    return 0;
}