#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to replace each node with the sum of all greater nodes in a BST
void replaceWithGreaterSum(TreeNode* root, int& sum) {
    if (!root) {
        return;
    }

    // Traverse the BST in reverse order (right-root-left)
    replaceWithGreaterSum(root->right, sum);

    // Update the node value with the sum of all greater nodes
    sum += root->val;
    root->val = sum;

    // Traverse the left subtree
    replaceWithGreaterSum(root->left, sum);
}

// Function to print the BST (inorder traversal)
void printBST(TreeNode* root) {
    if (!root) {
        return;
    }

    // Traverse the BST in inorder (left-root-right)
    printBST(root->left);
    cout << root->val << " ";
    printBST(root->right);
}

// Function to insert a node into a BST
TreeNode* insert(TreeNode* root, int val) {
    if (!root) {
        return new TreeNode(val);
    }

    if (val <= root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

int main() {
    // Input the number of nodes
    int N;
    cin >> N;

    // Input the nodes to create the BST
    TreeNode* root = nullptr;
    for (int i = 0; i < N; ++i) {
        int nodeValue;
        cin >> nodeValue;
        root = insert(root, nodeValue);
    }

    // Initialize the sum as 0
    int sum = 0;

    // Replace each node with the sum of all greater nodes
    replaceWithGreaterSum(root, sum);

    // Print the resulting BST
    cout << "BST after replacing each node with the sum of all greater nodes: ";
    printBST(root);
    cout << endl;

    // Free memory allocated for the tree nodes
    delete root;

    return 0;
}
