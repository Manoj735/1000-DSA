// using recursion and iteration
// 1. using recursion
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

// void printPostorder(Node *newnode)
// {
//     if (newnode == NULL)
//         return;

//     printPostorder(newnode->left);

//     printPostorder(newnode->right);

//     cout << newnode->data << " ";
// }

// void printInorder(Node *newnode)
// {
//     if (newnode == NULL)
//         return;

//     printInorder(newnode->left);

//     cout << newnode->data << " ";

//     printInorder(newnode->right);
// }

// void printPreorder(Node *newnode)
// {
//     if (newnode == NULL)
//         return;

//     cout << newnode->data << " ";

//     printPreorder(newnode->left);

//     printPreorder(newnode->right);
// }

// int main()
// {
//     Node *root = createnode(1);
//     root->left = createnode(2);
//     root->left->left = createnode(3);
//     root->left->right = createnode(4);

//     // cout << "Enter data to create bst (or enter -1 to end the tree)\n";
//     // getData(root);
//     cout << "The inorder traversal is - " << endl;
//     printInorder(root);
//     cout << "\nThe postorder traversal is - " << endl;
//     printPostorder(root);
//     cout << "\nThe preorder traversal is - " << endl;
//     printPreorder(root);
// }

// 2. using iteration
#include <iostream>
#include <stack>
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

void printInorder(Node *root)
{
    stack<Node *> stack;
    Node *newnode = root;
    while (!stack.empty() || newnode != NULL)
    {
        if (newnode != NULL)
        {
            stack.push(newnode);
            newnode = newnode->left;
        }
        else
        {
            newnode = stack.top();
            stack.pop();
            cout << newnode->data << " ";
            newnode = newnode->right;
        }
    }
}
void printPreorder(Node *newnode)
{
}
void printPostorder(Node *newnode)
{
}

int main()
{
    Node *root = createnode(1);
    root->left = createnode(2);
    root->left->left = createnode(3);
    root->left->right = createnode(4);

    // cout << "Enter data to create bst (or enter -1 to end the tree)\n";
    // getData(root);
    cout << "The inorder traversal is - " << endl;
    printInorder(root);
    cout << "\nThe postorder traversal is - " << endl;
    printPostorder(root);
    cout << "\nThe preorder traversal is - " << endl;
    printPreorder(root);
}