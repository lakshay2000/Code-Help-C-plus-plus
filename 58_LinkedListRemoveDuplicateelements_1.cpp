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

// removing duplicate elements from unsorted lists

// TC - O(n ^ 2);
// SC-O(1)
Node *removeDuplicates(Node *head)
{
    // Write your code here
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;

    while (curr != NULL && curr->next != NULL)
    {
        Node *temp = curr;

        while (temp->next != NULL)
        {
            if (curr->data == temp->next->data)
            {
                Node *todelete = temp->next;
                temp->next = temp->next->next;
                delete todelete;
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

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
#include <bits/stdc++.h>

// TC - O(n);
// SC-O(n)
Node *removeDuplicates(Node *head)
{
    // Write your code here
    Node *curr = head;
    Node *prev = NULL;
    unordered_map<int, int> visited;

    while (curr != NULL)
    {
        if (!visited[curr->data])
        {
            visited[curr->data] = 1;
            prev = curr;
            //             curr = curr -> next;
        }
        else
        {
            prev->next = curr->next;
            delete curr;
        }
        curr = prev->next;
    }
    return head;
}