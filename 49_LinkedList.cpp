#include <iostream>
#include <map>
using namespace std;

// Linked Lists is a dynamic DS and it can grow/shrink at runtime and no memory wastage and insertion/deletion is easy (i.e. no shifting needed)

class node
{

public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";

        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node *&head)
{
    node *todelete = head;

    head = head->next;
    delete todelete;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

node *reverse(node *&head)
{
    node *preious = NULL;
    node *current = head;
    node *nextptr;

    while (current != NULL)
    {
        nextptr = current->next;

        current->next = preious;
        preious = current;
        current = nextptr;
    }
    return preious;
}

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = (reverseRecursive(head->next));

    head->next->next = head;
    head->next = NULL;

    return newhead;
}

bool detectLoop(node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<node *, bool> visited;

    node *temp = head;
    while (temp != NULL)
    {

        // cycle is present
        if (visited[temp] == true)
        {
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

node *floydDetectLoop(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

int main()
{

    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    insertAtHead(head, 4);

    // display(head);

    int ans = search(head, 7);

    if (ans)
    {
        cout << "Mil gya";
    }
    else
    {
        cout << "nhi mila";
    }

    cout << endl;
    // deletion(head, 3);
    // deleteAtHead(head);
    display(head);

    // iterative way of reversing a linkedlist
    node *newhead = reverseRecursive(head);
    display(newhead);

    if (detectLoop(head))
    {
        cout << "Loop hai" << endl;
    }
    else
    {
        cout << "Loop nhi hai" << endl;
    }

    if (floydDetectLoop(head) != NULL)
    {
        cout << "Loop hai bhai" << endl;
    }
    else
    {
        cout << "Loop nhi hai bhai" << endl;
    }

    return 0;
}