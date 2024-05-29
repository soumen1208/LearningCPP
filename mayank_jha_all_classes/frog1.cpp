#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int dp[100010];

/*
   over all time complexity
   o(n) and o(n)
   o(state) = o(n)
   o(transition time) = o(1)
   o(n)*o(1) == o(n);
*/
 class Frog1
{
    public:
    int solve(int* height, int x)
    {
        if (x<=0)
        {
            return 0;
        }
        
        // for dp using first check
        if (dp[x] != -1)
        {
            return dp[x];
        }
        
        int option1 = INT8_MAX, option2 = INT8_MAX;

        if (x-1 >= 0)
        {
            option1 = solve(height, x-1) +abs (height[x] - height[x-1]);
        }

        if (x-2 >= 0)
        {
            option2 = solve(height, x-2) + abs(height[x] - height[x-2]);
        }

        int ans = min(option1, option2);
        
        // store before return 
        return dp[x] = ans;
         
    }

    int solve2 (int height[], int element, int n)
    {
        if (element == n)
        return 0;

        int option1 = INT8_MAX, option2 = INT8_MAX;
        if (element+1 <= n)
        {
            option1 = solve2(height,element+1,  n) + abs(height[element] - height[element+1]);
        }

        if (element+2 <= n)
        {
            option2 = solve2(height,element+2, n) + abs(height[element] - height[element+2]);
        }

        int ans = min(option1, option2);
        return ans;
    }

    int solve3 (int* height, int x)
    {
        dp[0] = 0;
        dp[1] = abs(height[0] - height[1]);

        for (int i=2; i<=x; i++)
        {
            int op1 = dp[i-1] + abs(height[i-1] - height[i]);
            int op2 = dp[i-2] + abs(height[i-2] - height[i]);

            dp[i] = min(op1,op2);
        }

        return dp[x];
    }
};
int main()
{
    int n;
    cin>>n;

    int height[n];
    for (int i=0; i<n; i++)
    {
        cin>>height[i];
    }

   Frog1 sl;

   // intialazing dp..
   memset(dp, -1, sizeof(dp));
   cout<<sl.solve(height, n-1);
   
   // intialazing dp..
   memset(dp, -1, sizeof(dp));
   cout<<"\n"<<sl.solve2(height,0, n-1);

   memset(dp, -1, sizeof(dp));
   cout<<"\n"<<sl.solve3(height, n-1);
}