#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    node *head = NULL;
    node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        if (sz == 0)
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        sz--;
        node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top()
    {
        if (sz == 0)
        {
            cout << "Stack is empty. No top element." << endl;
            return -1; // Return a default value or throw an exception.
        }
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myStack st1, st2; // Create two stacks

    int n1, n2;
    cout << "Enter the number of elements for stack 1: ";
    cin >> n1;
    cout << "Enter the elements for stack 1: ";
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        st1.push(x); // Push elements into the first stack
    }

    cout << "Enter the number of elements for stack 2: ";
    cin >> n2;
    cout << "Enter the elements for stack 2: ";
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        st2.push(x); // Push elements into the second stack
    }

    // Perform operations on stack 1
    cout << "Stack 1 elements:" << endl;
    while (!st1.empty())
    {
        cout << st1.top() << endl;
        st1.pop();
    }

    // Perform operations on stack 2
    cout << "Stack 2 elements:" << endl;
    while (!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }

    return 0;
}
