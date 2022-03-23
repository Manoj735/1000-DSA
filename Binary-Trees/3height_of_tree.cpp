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
    return (newnode);
}

int height_of_tree(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else
    {
        int ltree = height_of_tree(root->left);
        int rtree = height_of_tree(root->right);

        if (ltree > rtree)
        {
            return (ltree + 1);
        }
        return (rtree + 1);
    }
}

int main()
{
    Node *root = createnode(1);
    cout << "Height of tree is " << height_of_tree(root);
    return 0;
}