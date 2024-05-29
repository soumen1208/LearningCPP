#include <iostream>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to print the left view of a binary tree
void leftView(TreeNode* root) {
    if (!root) {
        return;
    }

    queue<TreeNode*> levelQueue;
    levelQueue.push(root);

    while (!levelQueue.empty()) {
        int levelSize = levelQueue.size();

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* current = levelQueue.front();
            levelQueue.pop();

            // Print the leftmost node of each level
            if (i == 0) {
                cout << current->val << " ";
            }

            if (current->left) {
                levelQueue.push(current->left);
            }
            if (current->right) {
                levelQueue.push(current->right);
            }
        }
    }
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

    // Print the left view of the binary tree
    leftView(root);

    // Free memory allocated for the tree nodes
    delete root;

    return 0;
}
