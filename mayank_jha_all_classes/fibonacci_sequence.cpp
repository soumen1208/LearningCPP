#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[10005];
int fib (int n)
{
    if (n<=1)
    {
        return n;
    }
    
    // check before calculate
    // check ans have already in that 
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int op1 = fib(n-1);
    int op2 = fib(n-2);

    int ans = op1 + op2;
    
    // jab apne ans alrady calculated kar liya hai of the current state..... 
    // store this ans for future reference....

    return dp[n] = ans;
}

int fibIterative (int n)
{
    dp[0] = 0;
    dp[1] = 1;

    for (int i=2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
        
     //   cout<<dp[i];
    }

    return dp[n];

}
int main()
{
    int n;
    cin>>n;

    // for (int i=0; i<10005; i++)
    // {
    //     dp[i] = -1;
    // }
    memset(dp, -1, sizeof(dp));
    cout<<fib(n)<<endl;

    memset(dp, -1, sizeof(dp));
    cout<<fibIterative(n);
}