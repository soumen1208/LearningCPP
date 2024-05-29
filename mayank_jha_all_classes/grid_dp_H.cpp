#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int N = 1001;
char grid [N][N];

int solve (int h, int w)
{
    int dp[h+1][w+1] = {0};
    dp[h][w] = 1;
    for (int i =h; i>=0; i--)
    {
        for (int j=w; j>=0; j--)
        {
            if (i==h and j==w)
            {
                continue;
            }
            if (grid [i][j] =='#')
            {
                dp[i][j] = 0;
            }else
            {
                if (i==h)
                {
                    dp[i][j] = (dp[i][j+1]) % mod;
                }else if(j==w) 
                {
                    dp[i][j] = (dp[i+1] [j]) % mod;
                }else
                {
                    dp[i][j] = (dp[i+1][j]%mod + dp[i][j+1]%mod) %mod;
                }
            }
        }
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }
}