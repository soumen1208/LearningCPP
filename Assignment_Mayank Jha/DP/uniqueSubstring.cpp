// C++ program to print sum of all substring of
// a number represented as a string
#include <bits/stdc++.h>
using namespace std;

// Utility method to convert character digit to
// integer digit
int toDigit(char ch) { return (ch - '0'); }

// Returns sum of all substring of num
int sumOfSubstrings(string num)
{
	int n = num.length();

	// allocate memory equal to length of string
	int sumofdigit[n];

	// initialize first value with first digit
	sumofdigit[0] = toDigit(num[0]);
	int res = sumofdigit[0];

	// loop over all digits of string
	for (int i = 1; i < n; i++) {
		int numi = toDigit(num[i]);

		// update each sumofdigit from previous value
		sumofdigit[i]
			= (i + 1) * numi + 10 * sumofdigit[i - 1];

		// add current value to the result
		res += sumofdigit[i];
	}

	return res;
}

// Driver code
int main()
{
	string num = "ABC";

	// Function call
	cout << sumOfSubstrings(num) << endl;
	return 0;
}
