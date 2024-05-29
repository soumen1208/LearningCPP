#include<iostream>
#include<cstring>
using namespace std;
#define int long long
#define mod 1000000007
int k;
int a, b;
int pre[100005];
int dp[100005];

int flowers(int len)
{
    if (len ==0)
    {
        return dp[len];
    }

    if (dp[len] != -1)
    {
        return dp[len];
    }

    int option1 = flowers (len -1);
    int option2 = 0;

    if (len>=k)
    option2 = flowers (len-k);

    return dp[len] = option1 + option2; 
}
void percompute()
{
    memset(dp, -1, sizeof(dp));

    for (int i = 1; i<100010; i++)
    {
        pre[i] = pre[i-1] +flowers(i);

        pre[i] = pre[i] % mod;  
    }
}

int32_t main()
{
    int t; cin>>t>>k;

    percompute ();

    while(t--)
    {
        cin>>a>>b;
        cout<<pre[b] - pre[a-1]<<endl;
    }
}