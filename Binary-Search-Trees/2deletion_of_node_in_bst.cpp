
#include <bits/stdc++.h>
using namespace std;

struct node {
	int key;
	struct node *left, *right;
};

// A utility function to create a new BST node
struct node* newNode(int item)
{
	struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// A utility function to do
// inorder traversal of BST
void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		cout << root->key;
		inorder(root->right);
	}
}

/* A utility function to
insert a new node with given key in
* BST */
struct node* insert(struct node* node, int key)
{
	/* If the tree is empty, return a new node */
	if (node == NULL)
		return newNode(key);

	/* Otherwise, recur down the tree */
	if (key < node->key)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);

	/* return the (unchanged) node pointer */
	return node;
}

/* Given a non-empty binary search tree, return the node
with minimum key value found in that tree. Note that the
entire tree does not need to be searched. */
struct node* minValueNode(struct node* node)
{
	struct node* current = node;

	/* loop down to find the leftmost leaf */
	while (current && current->left != NULL)
		current = current->left;

	return current;
}

/* Given a binary search tree and a key, this function
deletes the key and returns the new root */
struct node* deleteNode(struct node* root, int key)
{
	// base case
	if (root == NULL)
		return root;

	// If the key to be deleted is
	// smaller than the root's
	// key, then it lies in left subtree
	if (key < root->key)
		root->left = deleteNode(root->left, key);

	// If the key to be deleted is
	// greater than the root's
	// key, then it lies in right subtree
	else if (key > root->key)
		root->right = deleteNode(root->right, key);

	// if key is same as root's key, then This is the node
	// to be deleted
	else {
		// node has no child
		if (root->left==NULL and root->right==NULL)
			return NULL;
	
		// node with only one child or no child
		else if (root->left == NULL) {
			struct node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node* temp = root->left;
			free(root);
			return temp;
		}

		// node with two children: Get the inorder successor
		// (smallest in the right subtree)
		struct node* temp = minValueNode(root->right);

		// Copy the inorder successor's content to this node
		root->key = temp->key;

		// Delete the inorder successor
		root->right = deleteNode(root->right, temp->key);
	}
	return root;
}

// Driver Code
int main()
{
	/* Let us create following BST
			50
		/	 \
		30	 70
		/ \ / \
	20 40 60 80 */
	struct node* root = NULL;
	root = insert(root, 50);
	root = insert(root, 30);
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root, 70);
	root = insert(root, 60);
	root = insert(root, 80);

	cout << "Inorder traversal of the given tree \n";
	inorder(root);

	cout << "\nDelete 20\n";
	root = deleteNode(root, 20);
	cout << "Inorder traversal of the modified tree \n";
	inorder(root);

	cout << "\nDelete 30\n";
	root = deleteNode(root, 30);
	cout << "Inorder traversal of the modified tree \n";
	inorder(root);

	cout << "\nDelete 50\n";
	root = deleteNode(root, 50);
	cout << "Inorder traversal of the modified tree \n";
	inorder(root);

	return 0;
}




// other code
#include <iostream>
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
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void search(Node *tempRoot, int data)
{
    int depth = 0;

    while (tempRoot != NULL)
    {
        depth++;
        if (tempRoot->data == data)
        {
            cout << "Data found at depth: " << depth << endl;
            return;
        }

        else if (tempRoot->data > data)
            tempRoot = tempRoot->left;

        else
            tempRoot = tempRoot->right;
    }
    cout << " Data not found" << endl;
    return;
}
Node *getMinimumKey(Node *cur)
{
    while (cur->left != nullptr)
    {
        cur = cur->left;
    }
    return cur;
}
void searchKey(Node *&cur, int key, Node *&parent)
{

    while (cur != nullptr && cur->data != key)
    {

        parent = cur;

        if (key < cur->data)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
}
void deletenode(Node *&root, int item)
{
    Node *parent = NULL;
    Node *cur = root;

    searchKey(cur, item, parent);
    if (cur == NULL)
    {
        return;
    }
    // Case 1 No Child Node
    if (cur->left == NULL && cur->right == NULL)
    {
        if (cur != root)
        {
            if (parent->left == cur)
            {
                parent->left = NULL;
            }
            else
            {
                parent->right = NULL;
            }
        }
        else
        {
            root = NULL;
        }
        free(cur);
    }
    // node to be deleted has two children
    else if (cur->left && cur->right)
    {
        Node *sucessor = getMinimumKey(cur->right);

        int val = sucessor->data;

        deletenode(root, sucessor->data);

        cur->data = val;
    }
    // node to be deleted has only one child
    else
    {
        Node *child = (cur->left) ? cur->left : cur->right;
        if (cur != root)
        {
            if (cur == parent->left)
            {
                parent->left = child;
            }
            else
            {
                parent->right = child;
            }
        }
        else
        {
            root = child;
        }
        free(cur);
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data to create bst (or enter -1 to end the tree)\n";
    getData(root);
    cout << "The inorder traversal is - " << endl;
    inorder(root);
    cout << "\nThe postorder traversal is - " << endl;
    postorder(root);
    cout << "\nThe preorder traversal is - " << endl;
    preorder(root);
    int x, choice;
    cout << "/nEnter 1 for search.";
    cout << "/nEnter 2 for Delete.";
    do
    {
        cout << "\nEnter the choice - ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "/nEnter the element you want to search." << endl;
            cin >> x;
            search(root, x);
            break;
        case 2:
            cout << "/nEnter the element you want to delete." << endl;
            cin >> x;
            deletenode(root, x);
            break;

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}
