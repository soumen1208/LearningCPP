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

Node* bulidTree ()
{
    int d;
    cin>>d;

    if (d == -1)
    return NULL;

    Node* root = new Node(d);
    root->left = bulidTree();
    root->right = bulidTree();

    return root;

}

void preOrder (Node* root)
{
    if (root == NULL)
    return ;

    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);

}

int replaceSum (Node* root)
{
    if (root == NULL)
    return 0;

    if (root->left == NULL && root->right == NULL)
    return root->data;

    int leftSum = replaceSum(root->left);
    int rightSum = replaceSum(root->right);

    int tmp = root->data;

    root->data = leftSum + rightSum;

    return leftSum + rightSum + tmp;
}

int main()
{
//     Node* root = new Node(100);
//     cout<<root->data;
    Node* root = bulidTree();
    //cout<<replaceSum(root);
    replaceSum(root);
    preOrder(root);
}