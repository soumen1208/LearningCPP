// // C++ program to find palindromic substrings of a string
// #include <bits/stdc++.h>
// using namespace std;

// // Returns total number of palindrome substring of
// // length greater than equal to 2
// int CountPS(char str[], int n)
// {
// //to store the count of palindrome subarrays
// int ans=0;

// 	// P[i][j] = true if substring str[i..j] is palindrome,
// 	// else false
// 	bool P[n][n];
// 	memset(P, false, sizeof(P));

// 	// palindrome of single length
// 	for (int i = 0; i < n; i++){
// 		P[i][i] = true;
// 	}


// 	// Palindromes of length more than or equal to 2. We start with
// 	// a gap of length 1 and fill the DP table in a way that
// 	// gap between starting and ending indexes increases one
// 	// by one by outer loop.
// 	for (int gap = 2; gap <=n; gap++) {
// 		// Pick starting point for current gap
// 		for (int i = 0; i <= n-gap; i++) {
// 			// Set ending point
// 			int j = gap + i-1;

// 			// check If current string is palindrome of length 2
// 			if(i==j-1){
// 			P[i][j]=(str[i]==str[j]);
// 			}else {
// 			//check if the current substring is palindrome of length more than 2
// 			//if characters at index i,j are equal check for string in between them
// 			//from i+1 to j-1 if it is palindrome or not
// 			P[i][j]=(str[i]==str[j] && P[i+1][j-1]);
// 			}
// 		//if substring from index i to j is palindrome increase the count
// 		if(P[i][j]){
// 			ans++;
// 		}
// 		}
// 	}

// 	// return total palindromic substrings
// 	return ans;
// }

// // Driver code
// int main()
// {
// 	char str[] = "abcba";
// 	int n = strlen(str);
// 	cout << CountPS(str, n) << endl;
// 	return 0;
// }




#include <iostream>
using namespace std;
int helper(string s,int dp[][101],int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return 1;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s[i]==s[j]){
        dp[i][j] = 1 + helper(s,dp,i+1,j) + helper(s,dp,i,j-1);
    }
    else{
        dp[i][j] = helper(s,dp,i,j-1) + helper(s,dp,i+1,j) - helper(s,dp,i+1,j-1);
    }
    return dp[i][j];
}
int countPS(string str)
{
   //Your code here
   int n = str.size();
   int dp[101][101];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           dp[i][j] = -1;
       }
   }
   return helper(str,dp,0,n-1);
}
int main() {
	// your code goes here
	string s;
	cin>>s;
	cout<<countPS(s);
	return 0;
}