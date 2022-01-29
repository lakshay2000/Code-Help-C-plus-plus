/************************************************************

    Following is the linked list node structure.

    class Node
    {
        public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

************************************************************/
// removing duplicate elements from sorted lists

Node *uniqueSortedList(Node *head)
{
    // Write your code here.
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {

            Node *nodeTodelete = curr->next;
            curr->next = curr->next->next;
            delete (nodeTodelete);
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}