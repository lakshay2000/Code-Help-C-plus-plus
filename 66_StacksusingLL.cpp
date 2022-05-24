#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);

        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return -1;
        }
        int res = head->data;

        Node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }

    // int size()
    // {
    //     return size;
    // }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }

    int peek()
    {
        if (head == NULL)
        {
            return -1;
        }
        return head->data;
    }
};

int main()
{
    Node *temp = new Node(8);

    Stack stk;

    cout << stk.isEmpty() << endl;

    stk.push(8);
    stk.push(6);

    cout << stk.pop() << endl;

    cout << stk.peek();

    return 0;
}