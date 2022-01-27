/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

void reverse(Node *&head, Node *curr, Node *prev)
{

    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *reverseLinkedList(Node *head)
{
    // Write your code here
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}
