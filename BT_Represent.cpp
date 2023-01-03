#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }

};

void preorder(auto Node)
{
    if(Node == NULL)
        return;

    cout << Node->data << " ";
    preorder(Node -> left);
    preorder(Node -> right);
};

void postorder(auto Node)
{
    if(Node == NULL)
        return;

    //cout << Node->data << " ";
    postorder(Node -> left);
    postorder(Node -> right);
    cout << Node->data << " ";
};

void inorder(auto Node)
{
    if(Node == NULL)
        return;

    inorder(Node -> left);
    cout << Node->data << " ";
    inorder(Node -> right);
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-order traversal: ";
    preorder(root);
    cout<<"\nPost-order traversal: ";
    postorder(root);
    cout<<"\nIn-order traversal: ";
    inorder(root);
}