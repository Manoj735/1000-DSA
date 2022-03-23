#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        left = NULL;
        right = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *Insert(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    else if (d < root->data)
    {
        root->left = Insert(root->left, d);
    }
    else
    {
        root->right = Insert(root->right, d);
    }
    return root;
}

void getData(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = Insert(root, data);
        cin >> data;
    }
}

void reverseLevelOrder(Node *root)
{
    stack<Node *> s;
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        root = q.front();
        q.pop();
        s.push(root);

        if (root->right)
        {
            q.push(root->right);
        }
        if (root->left)
        {
            q.push(root->left);
        }
    }

    while (s.empty() == false)
    {
        root = s.top();
        cout << root->data << " ";
        s.pop();
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data to create bst (or enter -1 to end the tree)\n";
    getData(root);
    cout << "The levelorder traversal is - " << endl;
    reverseLevelOrder(root);
    return 0;
}