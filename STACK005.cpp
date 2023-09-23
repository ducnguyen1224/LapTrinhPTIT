#include <bits/stdc++.h>
using namespace std;
bool tt(char x)
{
	switch (x)
	{
	case '+':
	case '-':
	case '/':
	case '*':
		return true;
	}
	return false;
}
string solve(string s)
{
	stack<string> v;
	int length = s.size();
	for (int i = length - 1; i >= 0; i--)
	{
		if (tt(s[i]))
		{
			string op1 = v.top();
			v.pop();
			string op2 = v.top();
			v.pop();
			string temp = op1 + op2 + s[i];
			v.push(temp);
		}

		else
		{
			v.push(string(1, s[i]));
		}
	}
	return v.top();
}
int main()
{
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		cin >> s;
		cout << solve(s) << endl;
	}
}