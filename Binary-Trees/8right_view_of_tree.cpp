#include <iostream>
using namespace std;
 
// Data structure to store a binary tree node
class Node
{
    public:
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
// Recursive function to print the right view of a given binary tree
void printRightView(Node* root, int level, int &last_level)
{
    // base case: empty tree
    if (root == nullptr) {
        return;
    }
 
    // if the current node is the last node of the current level
    if (last_level < level)
    {
        // print the node's data
        cout << root->key << " ";
 
        // update the last level to the current level
        last_level = level;
    }
 
    // recur for the right and left subtree by increasing level by 1
    printRightView(root->right, level + 1, last_level);
    printRightView(root->left, level + 1, last_level);
}
 
// Function to print the right view of a given binary tree
void printRightView(Node* root)
{
    int last_level = 0;
    printRightView(root, 1, last_level);
}
 
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    printRightView(root);
 
    return 0;
}