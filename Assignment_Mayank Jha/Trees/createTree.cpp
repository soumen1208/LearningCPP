#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to display the binary tree (inorder traversal)
void display(TreeNode* root) {
    if (!root) {
        return;
    }

    // Traverse the tree in inorder (left-root-right)
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}

// Function to build a binary tree from postorder and inorder traversals
TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder, int postStart, int postEnd, int inStart, int inEnd, unordered_map<int, int>& indexMap) {
    if (postStart > postEnd || inStart > inEnd) {
        return NULL;
    }

    // The last element in postorder is the root of the current subtree
    int rootValue = postorder[postEnd];
    TreeNode* root = new TreeNode(rootValue);

    // Find the index of rootValue in inorder
    int rootIndex = indexMap[rootValue];

    // Build the right subtree
    root->right = buildTree(postorder, inorder, postEnd - (inEnd - rootIndex), postEnd - 1, rootIndex + 1, inEnd, indexMap);

    // Build the left subtree
    root->left = buildTree(postorder, inorder, postStart, postEnd - (inEnd - rootIndex) - 1, inStart, rootIndex - 1, indexMap);

    return root;
}

int main() {
    // Input size of postorder array
    int N;
    cout << "Enter the size of the postorder array: ";
    cin >> N;

    // Input postorder array
    vector<int> postorder(N);
    cout << "Enter the elements of the postorder array: ";
    for (int i = 0; i < N; ++i) {
        cin >> postorder[i];
    }

    // Input size of inorder array
    int M;
    cout << "Enter the size of the inorder array: ";
    cin >> M;

    // Input inorder array
    vector<int> inorder(M);
    cout << "Enter the elements of the inorder array: ";
    for (int i = 0; i < M; ++i) {
        cin >> inorder[i];
    }

    // Build an index map for values in inorder array
    unordered_map<int, int> indexMap;
    for (int i = 0; i < M; ++i) {
        indexMap[inorder[i]] = i;
    }

    // Build the binary tree
    TreeNode* root = buildTree(postorder, inorder, 0, N - 1, 0, M - 1, indexMap);

    // Display the resulting tree (inorder traversal)
    cout << "The resulting tree (inorder traversal): ";
    display(root);
    cout << endl;

    // Free memory allocated for the tree nodes
    delete root;

    return 0;
}
