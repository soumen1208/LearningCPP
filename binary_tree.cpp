#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildtree () 
{
    int d;
    cin>>d;

    if (d == -1)
    return NULL;

    Node* root = new Node(d);
    root->left = buildtree();
    root->right = buildtree();

    return root;
}

void preOrder (Node* root)
{
    if (root == NULL)
    return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder (Node* root)
{
    if (root == NULL)
    return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder (Node* root)
{
    if (root == NULL)
    return;

    postOrder(root->left);
    postOrder(root->right); 
    cout<<root->data<<" ";
}

Node* search (Node* root, int target)
{
    if (root == NULL)
    return NULL;

    if (root->data == target)
    {
        return root;
    }
    
    Node* leftAns = search(root->left, target);
    if (leftAns != NULL)
    return leftAns;

    Node* rightAns = search(root->right, target);
    if (rightAns != NULL)
    return rightAns;


    return NULL;
}

int height (Node* root)
{
    if (root == NULL)
    return 0;

    int leftmax = height(root->left);
    int rightmax = height(root->right);

    return max(leftmax, rightmax)+1;

    // return max(height(root->left), height(root->right) +1);
}

int nodeCount(Node* root)
{
    if (root == NULL)
    return 0;

    // int leftcnt = nodeCount(root->left); // cnt of left subtree
    // int rightcnt = nodeCount(root->right); // cnt of right subtree

    // return leftcnt+rightcnt+1;

    return nodeCount(root->left) + nodeCount(root->right) + 1;

}
int main()
{
    // Node* root = new Node (100);
    // cout<<root->data<<endl;

    //Node* root = buildtree(); 
    // preOrder(root);
    // cout<<endl;
    // inOrder(root);
    // cout<<endl;
    // postOrder(root);
    Node* root = buildtree();
    // Node* desiredNode = search(root, 5);
    // cout<<desiredNode->data;
    // if (desiredNode == NULL)
    // cout<<"Not Found";

    // else 
    // cout<<"  -->> It's Found"<<endl;

    cout<<"height of the tree: " << height(root)<<endl;

    cout<<"Node count is: "<< nodeCount(root);
}
