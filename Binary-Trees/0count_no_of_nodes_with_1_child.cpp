#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    char data;
    Node *left;
    Node *right;
};

Node *createnode(char data){
    Node *newnode = new Node();
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return (newnode);
}

void inorder(Node *newnode){
    if (newnode == NULL)
    {
        return;
    }
    inorder(newnode->left);
    if (newnode->left == NULL && newnode->right != NULL)
    {
        cout<<newnode->data;
    }
    if (newnode->right == NULL && newnode->left != NULL)
    {
        cout<<newnode->data;
    }
    inorder(newnode->right);
    
    
}

int main()
{
    Node *root = createnode('a');
    root->left = createnode('b');
    root->right = createnode('c');
    root->left->left = createnode('d');
    root->right->left = createnode('e');
    inorder(root);
    return 0;
}