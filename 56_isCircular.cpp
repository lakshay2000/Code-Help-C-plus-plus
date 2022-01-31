#include <iostream>
#include <map>
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

// TC- O(n);
// SC-O(n);
bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;
    while (temp != NULL)
    {

        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Loop Present at " << temp->data << endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

// Floyed's cycle detection algorithm
// TC-O(N);
// SC-O(1);
// if slow == fast then cycle would be present
// if fast= NULL then no cycle is present

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

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
            cout << "present at bhai " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *start = getStartingNode(head);
    Node *temp = start;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{

    Node *tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 9);
    insertNode(tail, 9, 7);
    print(tail);
    // deleteNode(3, tail);
    print(tail);

    cout << "Tail = " << tail->data << endl;

    int an = isCircular(tail);
    if (an)
    {
        cout << "Circular h bhai" << endl;
    }
    else
    {
        cout << "nhi hai" << endl;
    }

    if (detectLoop(tail))
    {
        cout << "Loop hai" << endl;
    }
    else
    {
        cout << "Loop nhi hai" << endl;
    }
    if (floydDetectLoop(tail))
    {
        cout << "Loop hai bhai" << endl;
    }
    else
    {
        cout << "Loop nhi hai bhai" << endl;
    }

    Node *loop = getStartingNode(tail);
    cout << "Loop starting at " << loop->data << endl;

    removeLoop(tail);

    print(tail);
    return 0;
}
