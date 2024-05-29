#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int grid[101][101];

class Solution
{
private:
    /* data */
public:
    int dp[101][101];

    int uniquePaths2 (int m, int n)
    {
        if (m==0 and n==0)
        {
            return 1;
        }

        if (m<0 or n<0)
        {
            return 0;
        }
        
        if (dp[m][n] != -1)
        {
            return dp[m][n];
        }
        int op1 = uniquePaths2(m-1, n);
        int op2 = uniquePaths2(m, n-1);

        return dp[m][n] = op1 + op2;
    }
    int uniquePaths (int m, int n)
    {
        memset(dp, -1, sizeof(dp));
        return uniquePaths2(m-1, n-1);
    }
};

class Solution2
{
    public:
    int dp[101][101];

    int uniquePaths3(int m, int n)
    {
        if(m==1 and n==1)
        {
            return 1;

        }

        for (int i=1; i<=m; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (i==1 or j==1)
                dp[i][j] = 1;

                else
                dp[i][j]= dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[m][n];
    }
};

int main()
{
    // m = rows and n = column
    int m, n;
    cin>>m>>n;
    for (int i=0; i<m;i++)
    {
        for (int j =0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }
    Solution sl;
    cout<<sl.uniquePaths(m-1, n-1)<<endl;

    Solution2 sl2;
    cout<<sl2.uniquePaths3(m-1, n-1);

}