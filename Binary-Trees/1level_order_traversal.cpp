// using stack and queue
// 0(n)
#include <iostream>
#include <queue>
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

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    Node *curr;
    q.push(root);
    q.push(NULL);

    while (q.size() > 1)
    {
        curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            q.push(NULL);
            cout << "\n";
        }
        else
        {
            if (curr->left)
            {
                q.push(curr->left);
            }

            if (curr->right)
            {
                q.push(curr->right);
            }
            cout << curr->data << " ";
        }
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data to create bst (or enter -1 to end the tree)\n";
    getData(root);
    cout << "The levelorder traversal is - " << endl;
    levelOrder(root);
    return 0;
}