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

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
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

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        // deleting start node
        Node *temp = head;
        head = head->next;

        temp->next = NULL;
        // memory free
        delete temp;
    }
    else
    {
        // deleting any middle and last node
        Node *current = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = current;
            current = current->next;
            cnt++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
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

bool isCircular(Node *head)
{
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }

    return false;
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

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    deleteNode(5, head);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    print(head);
    if (isCircular(head))
    {
        cout << "CIrcular hai";
    }
    else
    {
        cout << "Nhi hai";
    }
    return 0;
}