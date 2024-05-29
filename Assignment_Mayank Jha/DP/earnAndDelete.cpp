#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n == 0) return 0;
        // can be optimized to use O(1) space.
        vector<int> pick(n);
        vector<int> skip(n);
        pick[0] = nums[0];
        skip[0] = 0;
        for(int i = 1; i < n; ++i){
            if(nums[i - 1] == nums[i]){
                pick[i] = pick[i - 1] + nums[i];
                skip[i] = skip[i - 1];
            }else if(nums[i - 1] + 1 == nums[i]){
                pick[i] = skip[i - 1] + nums[i];
                skip[i] = max(pick[i - 1], skip[i - 1]);
            }else{
                pick[i] = max(pick[i - 1], skip[i - 1]) + nums[i];
                skip[i] = max(pick[i - 1], skip[i - 1]);
            }
        }
        return max(pick[n - 1], skip[n - 1]);
    }
};

int main()
{
    int n ; cin>>n;
    int a;
    vector<int>arr;
    for (int i=0; i<n; i++)
    {
        cin>>a;
        arr.push_back(a);
    }

    Solution s;
    cout<<s.deleteAndEarn(arr);

}