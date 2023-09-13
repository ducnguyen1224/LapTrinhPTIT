#include <bits/stdc++.h>
using namespace std;

// ham kiem tra doi xung
bool Ktdoixung(string n)
{
	for (int i = 0; i < n.size() / 2; i++)
		if (n[i] != n[n.size() - 1 - i])
			return false;
	return true;
}

// chuyen tu number sang string
string NUM_to_String(long long num)
{

	if (num == 0)
		return "0";

	string Snum = "";
	while (num > 0) {
		Snum += (num % 10 - '0');
		num /= 10;
	}
	return Snum;
}

void Sodoixunggannhat(long long num)
{

	// case1 : so doi xung lon nhat nho hon so da cho
	long long Num1 = num - 1;

	while (!Ktdoixung(NUM_to_String(abs(Num1))))
		Num1--;

	// Case 2 : so doi xung nho nhat lon hon so da cho
	
	long long Num2 = num + 1;

	while (!Ktdoixung(NUM_to_String(Num2)))
		Num2++;

	// kiem tra tri tuyet doi de in ra
	if (abs(num - Num1) > abs(num - Num2))
		cout << Num2;
	else if(abs(num - Num1) < abs(num - Num2))
		cout << Num1;
	else
		cout << Num1 << " " << Num2;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long num;
		cin >> num;
		if(Ktdoixung(NUM_to_String(num))==true)
		{
			cout << num;
		}
		else if(num<9)
		{
			cout << num;
		}
		else
		Sodoixunggannhat(num);
		cout << endl;
	}
	return 0;
}