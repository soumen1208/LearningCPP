#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        for (int i = 0; i < A.size(); i++)
            if (i - A[i] > 1 || i - A[i] < -1) return false;
        return true;
    }
};

int main()
{
    int n;cin>>n;
    int m;
    vector<int>v;
    for (int i=0; i<n; i++)
    {
        cin>>m;
        v.push_back(m);
    }
    Solution s;
    // cout<<s.isIdealPermutation(v);
    if (s.isIdealPermutation(v))
    cout<<"YES";
    else
    cout<<"NO";
}