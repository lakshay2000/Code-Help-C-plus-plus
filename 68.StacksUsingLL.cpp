#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *top = NULL;
int size = 0;

void push(int x)
{
    Node *n = new Node(x);
    n->next = top;
    top = n;
    size++;
}

bool isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}

int peek()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        return top->data;
    }
}

void pop()
{
    Node *temp;

    if (top == NULL)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}

void display()
{
    Node *temp;

    if (top == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
    }
}

int main()
{

    push(22);
    push(33);
    push(44);

    display();
    cout << endl;
    cout << "TOp element " << peek() << endl;
    pop();
    // cout << endl;
    display();
    cout << "TOp element " << peek() << endl;

    if (isEmpty())
    {
        cout << "LL is empty" << endl;
    }
    else
    {
        cout << "LL is not empty" << endl;
    }
    cout << size << endl;
    return 0;
}