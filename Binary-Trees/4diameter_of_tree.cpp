#include <iostream>
#include <climits> // this is for int_min and int_max
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

int height(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int ltree = height(root->left, ans);
        int rtree = height(root->right, ans);

        ans = max(ans, 1 + ltree + rtree);
        return 1 + max(ltree, rtree);
    }
}

int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = INT_MIN;
    height(root, ans);
    return ans;
}

int main()
{
    Node *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    cout << diameter(root) << " ";
    return 0;
}