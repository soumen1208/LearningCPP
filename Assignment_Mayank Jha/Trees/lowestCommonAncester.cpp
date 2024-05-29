#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to find the Lowest Common Ancestor (LCA) of two nodes in a BST
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root) {
        return NULL;
    }

    if (root->val > p->val && root->val > q->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else if (root->val < p->val && root->val < q->val) {
        return lowestCommonAncestor(root->right, p, q);
    } else {
        return root;
    }
}

// Function to insert a node into a BST
TreeNode* insert(TreeNode* root, int val) {
    if (!root) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else if (val > root->val) {
        root->right = insert(root->right, val);
    }

    return root;
}

int main() {
    // Input the number of nodes
    int N;
    cin >> N;

    // Input the nodes to create the BST
    TreeNode* root = NULL;
    for (int i = 0; i < N; ++i) {
        int nodeValue;
        cin >> nodeValue;
        root = insert(root, nodeValue);
    }

    // Input the values of two nodes for which LCA is to be found
    int pVal, qVal;
    cin >> pVal >> qVal;

    // Create nodes for p and q
    TreeNode* p = new TreeNode(pVal);
    TreeNode* q = new TreeNode(qVal);

    // Find the Lowest Common Ancestor (LCA) of p and q
    TreeNode* lca = lowestCommonAncestor(root, p, q);

    // Output the value of the LCA
    cout << lca->val << endl;

    // Free memory allocated for the tree nodes
    delete root;
    delete p;
    delete q;

    return 0;
}
