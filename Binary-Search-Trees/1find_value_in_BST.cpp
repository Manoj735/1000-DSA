// search element in BST
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
// };

// Node *createnode(int data)
// {
//     Node *newnode = new Node();
//     newnode->data = data;
//     newnode->left = newnode->right = NULL;
//     return newnode;
// }

// Node *search(Node *root, int key)
// {
//     if (root == NULL || root->key == key)
//     {
//         return root;
//     }
//     if (root->key < key)
//     {
//         return search(root->right, key);
//     }
//     return search(root->left, key);
// }

// int main()
// {
//     Node *root = createnode(20);
//     root->left = createnode(15);
//     root->right = createnode(25);
//     root->left->left = createnode(10);
//     root->left->right = createnode(17);
// }

// insertion in binary search tree

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
    // Node *newnode = new Node();
    Node *newnode = new Node();
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void insert(Node *root, int k){
    if(root == NULL){
        return newnode;
    }
}

int main()
{
    Node *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    return 0;
}