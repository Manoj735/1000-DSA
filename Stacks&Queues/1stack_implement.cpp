#include <iostream>
using namespace std;

#define MAX 1000 // max size for stack

class Stack
{
    int top;

public:
    int myStack[MAX]; // stack array

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};
// pushes element on to the stack
bool Stack::push(int item)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow!!!";
        return false;
    }
    else
    {
        myStack[++top] = item;
        cout << item << endl;
        return true;
    }
}

// removes or pops elements out of the stack
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow!!";
        return 0;
    }
    else
    {
        int item = myStack[top--];
        return item;
    }
}

// check if stack is empty
bool Stack::isEmpty()
{
    return (top < 0);
}

// main program to demonstrate stack functions
int main()
{
    class Stack stack;
    cout << "The Stack Push " << endl;
    stack.push(2);
    stack.push(4);
    stack.push(6);
    cout << "The Stack Pop : " << endl;
    while (!stack.isEmpty())
    {
        cout << stack.pop() << endl;
    }
    return 0;
}

// using linked list
#include <iostream>
using namespace std;

// class to represent a stack node
class StackNode
{
public:
    int data;
    StackNode *next;
};

StackNode *newNode(int data)
{
    StackNode *stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(StackNode *root)
{
    return !root;
}

void push(StackNode **root, int new_data)
{
    StackNode *stackNode = newNode(new_data);
    stackNode->next = *root;
    *root = stackNode;
    cout << new_data << endl;
}

int pop(StackNode **root)
{
    if (isEmpty(*root))
        return -1;
    StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}
int peek(StackNode *root)
{
    if (isEmpty(root))
        return -1;
    return root->data;
}

int main()
{
    StackNode *root = NULL;
    cout << "Stack Push:" << endl;
    push(&root, 100);
    push(&root, 200);
    push(&root, 300);
    cout << "\nTop element is " << peek(root) << endl;
    cout << "\nStack Pop:" << endl;
    while (!isEmpty(root))
    {
        cout << pop(&root) << endl;
    }

    cout << "Top element is " << peek(root) << endl;

    return 0;
}