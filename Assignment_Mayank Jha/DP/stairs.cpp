// // C++ program to count number of
// // ways to reach Nth stair
// #include <bits/stdc++.h>
// using namespace std;

// // A simple recursive program to
// // find N'th fibonacci number
// int heaven(int n)
// {
// 	if (n <= 1)
// 		return n;
// 	return heaven(n - 1) + heaven(n - 2);
// }

// // Returns number of ways to
// // reach s'th stair
// int countWays(int s) { return heaven(s + 1); }

// // Driver Code
// int main()
// {
// 	int s = 3;

// 	cout << "Number of ways = " << countWays(s);

// 	return 0;
// }

// This code is contributed by shubhamsingh10








// C++ program to count number of ways to reach Nth stair
#include <bits/stdc++.h>
using namespace std;

// A simple recursive function to find number of ways to
// reach the nth stair
int countWays(int n, int dp[])
{
	if (n <= 1)
		return dp[n] = 1;

	if (dp[n] != -1) {
		return dp[n];
	}
	dp[n] = countWays(n - 1, dp) + countWays(n - 2, dp);
	return dp[n];
}

// Driver Code
int main()
{
	int n = 3;
	int dp[n + 1];
	memset(dp, -1, sizeof dp);
	cout << "Number of ways = " << countWays(n, dp);
	return 0;
}

