#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct TreeNode{
    ll val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(ll v) : val(v), left(NULL), right(NULL) {}
};


TreeNode* buildTree(vector<ll>& nums) {
    if(nums.empty()) return NULL;
    TreeNode* root=new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    ll i=1;
    while(!q.empty() && i<nums.size()){
        TreeNode* current=q.front();
        q.pop();
        if(nums[i]!=-1){
            current->left=new TreeNode(nums[i]);
            q.push(current->left);
        }
        i++;
        if(i<nums.size() && nums[i]!=-1){
            current->right=new TreeNode(nums[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}


void topView(TreeNode* root){
    if(root==NULL) return;
    queue<pair<TreeNode*,ll>> q;
    map<ll,ll> topViewMap; 
    q.push({root,0});
    while(!q.empty()){
        TreeNode* current=q.front().first;
        ll horizontalDist=q.front().second;
        q.pop();
        if(topViewMap.find(horizontalDist)==topViewMap.end())
            topViewMap[horizontalDist]=current->val;
        if(current->left)
            q.push({current->left,horizontalDist-1});
        if(current->right)
            q.push({current->right,horizontalDist+1});
    }
    for(const auto& entry : topViewMap) {
        cout<<entry.second<<" ";
    }
}

int main() {
    vector<ll> nums;
    ll val;
    while(cin>>val)
        nums.push_back(val);
    TreeNode* root=buildTree(nums);
    topView(root);
    return 0;
}