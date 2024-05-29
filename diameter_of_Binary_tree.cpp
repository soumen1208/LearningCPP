#include<iostream>
#include<queue>
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

Node* buildTree()
{
    int d;
    cin>>d;

    if (d == -1)
    return NULL;

    Node* root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void preOrder(Node* root)
{
    if (root == NULL)
    return;

    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}

int height(Node* root)
{
    if (root == NULL)
    return 0;

    int leftheight = height(root->left);
    int rightheight = height(root->right);

    return max(leftheight, rightheight)+1;
}

int diameter(Node* root)
{
    if (root == NULL)
    return 0;

    int d1 = diameter(root->left);  // dia of the left subtree
    int d2 = diameter(root->right); // dia of the right subtree
    int h1 = height(root->left);
    int h2 = height(root->right);
    int d3 = h1+h2; // dia of the including root

    return max(max(d1, d2), d3);
}

class Pair
{
    public:

    int diameter;
    int height;
};

Pair myFunc(Node* root)
{
    Pair p;
    if (root == NULL)
    {
        p.diameter = 0;
        p.height = 0;

        return p;
    }

    Pair left = myFunc(root->left); // left subtree
    Pair right = myFunc(root->right); // right subtree
    
    int h1 = left.height;
    int h2 = right.height;

    int d1 = left.diameter;
    int d2 = right.diameter;

    int d3 = h1 + h2;

    int d = max(max(d1, d2), d3);
    int h = max(h1,h2)+1;

    p.diameter = d;
    p.height = h;

    // p.diameter = max(max(left.diameter, right.diameter), left.height+right.height);
    // p.height = max(left.height, right.height) +1;

    return p;

}

void invert (Node* root)
{
    if (root == NULL)
    {
        return;
    }
    invert(root->left);
    invert(root->right);

    swap(root->left, root->right); // yes we also can use swap function.

    // Node* tmp = root->left;
    // root->left = root->right;
    // root->right = tmp;

}

void search_At_Kth_Position (Node* root, int k)
{
    if (root == NULL)
    return;

    if (k==1)
    {
        cout<<root->data<<" ";
        return;
    }

    search_At_Kth_Position(root->left, k-1);
    search_At_Kth_Position(root->right, k-1);
}

void bfs (Node* root)
{
    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        Node* curr = q.front();

        cout<<curr->data<<" ";

        if (curr->left != NULL)
        q.push(curr->left);

        if(curr->right != NULL)
        q.push(curr->right);

        q.pop();
    }
    
}

void bfsPeintInNewLine (Node* root)
{
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        /* code */

        Node* curr = q.front();
        q.pop();
        
        if (curr == NULL)
        {
            cout<<endl;

            if (!q.empty())
            q.push(NULL);
        }

        else
        {
            cout<<curr->data<<" ";

            if (curr->left != NULL)
            q.push(curr->left);

            if (curr->right != NULL)
            q.push(curr->right);
        }
    }
    
}

int main()
{
    Node* root = buildTree();

    //Pair ans =  myFunc(root);
    //cout<<"dia of the tree: "<<ans.diameter<<endl;
    //cout<<"height of the tree: "<<ans.height;

    // invert(root);
    // preOrder(root);

    //search_At_Kth_Position(root, 3);
/*
    int ht= height(root);
    for (int i =1; i<=ht; i++)
    {
        search_At_Kth_Position(root, i);       -->> for print all position of tree......................
        cout<<endl;
    }
*/

   //  bfs(root);   -->> for breath first search..

   bfsPeintInNewLine(root);

}