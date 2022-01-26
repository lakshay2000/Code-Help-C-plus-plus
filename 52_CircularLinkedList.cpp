#include <iostream>
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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory freed " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // element in the list (assuming)

    // empty list
    if (tail == NULL)
    {
        Node *newnode = new Node(d);

        tail = newnode;
        newnode->next = newnode;
    }
    else
    {

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found-> curr is pointing towards that element

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(int value, Node *&tail)
{

    if (tail == NULL)
    {
        cout << "List is empty";
        return;
    }
    else
    {

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // element found
        if (curr == prev)
        {
            tail = NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{

    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{

    Node *tail = NULL;

    insertNode(tail, 5, 3);
    // insertNode(tail, 3, 5);
    // insertNode(tail, 5, 9);
    // insertNode(tail, 9, 7);
    // print(tail);
    deleteNode(3, tail);
    print(tail);

    cout << "Tail = " << tail->data << endl;
    return 0;
}