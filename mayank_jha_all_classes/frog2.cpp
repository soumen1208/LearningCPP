#include<bits/stdc++.h>
using namespace std;
int k;

int solve (int a[], int x, int n)
{
    if (x==n)
    return 0;

    int option = INT8_MAX;

    for (int i =1; i<=k; i++ )
    {
        if (x+i <= n)
        {
        int jump = abs(a[x] - a[i+x]);
        int rest = solve(a, x+i, n);

        option = min(option, jump+rest);
        }
    }
    
    return option;
}


int main()
{
    int n;
    cin>>n>>k;

    int a[n];
    for (int i=0; i<n;i++)
    {
        cin>>a[i];
    }

    cout<<solve(a, 0, n-1);
}
