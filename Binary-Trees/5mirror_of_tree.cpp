#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

void mirror(Node *newnode)
{
    if (newnode == NULL)
    {
        return;
    }
    else
    {
        Node *temp;
        mirror(newnode->left);
        mirror(newnode->right);

        temp = newnode->left;
        newnode->left = newnode->right;
        newnode->right = temp;
    }
}

void printTree(Node *newnode)
{
    if (newnode == NULL)
    {
        return;
    }
    printTree(newnode->left);
    cout << newnode->data << " ";
    printTree(newnode->right);
}

Node *createnode(int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

int main()
{
    Node *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);

    cout << "inorder traversal is " << endl;
    printTree(root);
    mirror(root);
    printTree(root);
    return 0;
}