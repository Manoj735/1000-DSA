#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
};

Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

bool isBST(Node *root, Node *l = NULL, Node *r=NULL){
    if (root == NULL)
    {
        return true;
    }
    if (l != NULL && root->data <= l->data)
    {
        return false;
    }
    if (r != NULL && root->data >= r->data)
    {
        return false;
    }

    return isBST(root->left, l, root) && isBST(root->right, root, r);
}

int main(){
    Node *root = newNode(3);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(4);

    if (isBST(root,NULL,NULL))
        cout << "Is BST";
    else
        cout << "Not a BST";
 
    return 0;
}