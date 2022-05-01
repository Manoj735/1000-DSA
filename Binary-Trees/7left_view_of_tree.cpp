#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *createnode(int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}
void leftView(Node *root, int level, int *max_level)
{
    if (root == NULL)
    {
        return;
    }
    if (*max_level < level)
    {
        cout << root->data << " ";
        *max_level = level;
    }
    leftView(root->left, level + 1, max_level);
    leftView(root->right, level + 1, max_level);
}

void LEFT_VIEW(Node *root)
{
    int max_level = 0;
    leftView(root, 1, &max_level);
}

int main()
{
    Node *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    LEFT_VIEW(root);
    return 0;
}