// C++ Program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to return sum of two
// large numbers given as strings
string sumBig(string a, string b)
{

	// Compare their lengths
	if (a.length() > b.length())
		swap(a, b);

	// Stores the result
	string str = "";

	// Store the respective lengths
	int n1 = a.length(),
		n2 = b.length();

	int diff = n2 - n1;

	// Initialize carry
	int carry = 0;

	// Traverse from end of both strings
	for (int i = n1 - 1; i >= 0; i--) {
		// Compute sum of
		// current digits and carry
		int sum = ((a[i] - '0')
				+ (b[i + diff] - '0')
				+ carry);

		// Store the result
		str.push_back(sum % 10 + '0');

		// Update carry
		carry = sum / 10;
	}

	// Add remaining digits of str2[]
	for (int i = n2 - n1 - 1; i >= 0; i--) {

		int sum = ((b[i] - '0') + carry);

		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	// Add remaining carry
	if (carry)
		str.push_back(carry + '0');

	// Reverse resultant string
	reverse(str.begin(), str.end());

	return str;
}

// Function return 9's
// complement of given number
string complement9(string v)
{
	// Stores the complement
	string complement = "";

	for (int i = 0; i < v.size(); i++) {

		// Subtract every bit from 9
		complement += '9' - v[i] + '0';
	}

	// Return the result
	return complement;
}

// Function returns subtraction
// of two given numbers as strings
string subtract(string a, string b)
{

	// If second string is larger
	if (a.length() < b.length())
		swap(a, b);

	// Calculate respective lengths
	int l1 = a.length(),
		l2 = b.length();

	// If lengths are equal
	int diffLen = l1 - l2;

	for (int i = 0; i < diffLen; i++) {

		// Insert 0's to the beginning
		// of b to make both the lengths equal
		b = "0" + b;
	}

	// Add (complement of B) and A
	string c = sumBig(a, complement9(b));

	// If length of new string is greater
	// than length of first string,
	// than carry is generated
	if (c.length() > a.length()) {
		string::iterator it;

		// bit1 is the carry bit
		char bit1 = c[0];
		string bit = { bit1 };
		it = c.begin();
		c.erase(it);
		c = sumBig(c, bit);
		return c;
	}

	// If both lengths are equal
	else {
		return complement9(c);
	}
}

// Driver Code
int main()
{

	int tc;cin>>tc;
	while(tc--){
		string s,t;cin>>s>>t;
	cout << subtract(s, t) << endl;
	}


	return 0;
}