#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to perform level order traversal and print the right side view
vector<int> rightSideView(TreeNode* root) {
    vector<int> result;

    if (!root) {
        return result;
    }

    queue<TreeNode*> levelQueue;
    levelQueue.push(root);

    while (!levelQueue.empty()) {
        int levelSize = levelQueue.size();

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* current = levelQueue.front();
            levelQueue.pop();

            // Only add the rightmost node of each level to the result
            if (i == levelSize - 1) {
                result.push_back(current->val);
            }

            if (current->left) {
                levelQueue.push(current->left);
            }
            if (current->right) {
                levelQueue.push(current->right);
            }
        }
    }

    return result;
}

// Function to build a binary tree from level order traversal
TreeNode* buildTree(vector<int>& levelOrder, int index) {
    if (index >= levelOrder.size() || levelOrder[index] == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(levelOrder[index]);
    root->left = buildTree(levelOrder, 2 * index + 1);
    root->right = buildTree(levelOrder, 2 * index + 2);

    return root;
}

int main() {
    // Input level order traversal of the tree
    vector<int> levelOrder;
    int value;
    while (cin >> value) {
        levelOrder.push_back(value);
    }

    // Build the binary tree
    TreeNode* root = buildTree(levelOrder, 0);

    // Get the right side view of the binary tree
    vector<int> result = rightSideView(root);

    // Print the right side view
    for (int val : result) {
        cout << val << " ";
    }

    // Free memory allocated for the tree nodes
    delete root;

    return 0;
}
