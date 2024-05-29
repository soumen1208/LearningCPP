#include <iostream>
// #include<cstring>
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5 +10;

int *taste;
int *calorie;
int n, k;

int dp[105][2*N];


int dimaAndSalad (int index, int sum)
{
    if (index == n)
    {
        if (sum == 0)
        {
            return 0;
        }else{
            return -1e10;
        }
    }
    
    if (dp[index][sum + N] != -1)
    {
        return dp [index][sum];
    }
    int option1 = taste[index] + dimaAndSalad(index+1, sum+(taste[index] - k*calorie[index]));  
    int option2 = 0 + dimaAndSalad(index+1, sum);

    return dp [index][sum+N] = max(option1, option2);
}

int32_t main()
{
    cin>>n>>k;
    taste = new int[n];
    calorie = new int[n];

    for (int i =0; i<n; i++)
    {
        cin>>taste[i];
    }
    for (int i=0; i<n; i++)
    {
        cin>>calorie[i];
    }
    
    memset(dp, -1, sizeof(dp));
    // cout<<dimaAndSalad(0, 0);
    // if (dimaAndSalad(0,0) <= 0)
    // cout<<-1<<endl;

    // else
    // cout<<dimaAndSalad(0,0)<<endl;

    int ans = dimaAndSalad(0,0);
    if (ans<= 0)
    {
        cout<<-1<<endl;

    }else{
        cout<<ans<<endl;
    }

}