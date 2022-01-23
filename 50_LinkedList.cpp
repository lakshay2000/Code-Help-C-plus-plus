#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);

    temp->next = head;

    head = temp;
}

void insertatTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;

    tail = tail->next;
}

void insertatPosition(int position, int d, Node *&head, Node *&tail)
{
    Node *temp = head;

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // inserting at tail
    if (temp->next == NULL)
    {
        insertatTail(tail, d);
        return;
    }

    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // creating a  node for d

    Node *nodeToinsert = new Node(d);

    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 15);
    // insertatTail(head, 18);
    print(head);

    insertatTail(tail, 18);
    print(head);

    insertatPosition(3, 22, head, tail);
    print(head);

    return 0;
}