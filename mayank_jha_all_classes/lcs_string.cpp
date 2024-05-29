#include<iostream>
#include<string.h>
// #include<bits/stdc++.h>
using namespace std;
string s, t;
int dp[3001][3001];

string getLcs (int len)
{
    string ans;
    int  i=0, j=0;

    while(len>0)
    {
        if (s[i] == t[j])
        {
            ans.push_back(s[i]);
            i++ , j++;
            len--;
        }else{
            if (dp[i][j+1] > dp[i+1][j])
            {
                j++;
            }else{
                i++;
            }
        }
    }

    return ans;
}
int lcs (int i, int j)
{
    if (i>=s.length() or j>=t.length())
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if (s[i] == t[j])
    {
        return dp[i][j] = 1 + lcs(i+1, j+1);
    }else{
        int op1 = lcs(i+1, j);
        int op2 = lcs(i, j+1);

        return dp[i][j] = max(op1, op2);
    }
    
}

string solve()
{
    memset(dp, -1, sizeof(dp));
    int len = lcs(0, 0);

    string str = getLcs(len);
    return str;
}

// ...........................................................................

int main()
{
    cin>>s>>t;

    memset(dp, -1, sizeof(dp));
    cout<<lcs(0, 0);

    cout<<endl<<solve();
}