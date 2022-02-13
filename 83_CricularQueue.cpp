class CircularQueue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[n];
        qfront = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        // Write your code here.
        if (qfront == 0 && rear == size - 1 || (rear == (qfront - 1) % (size - 1)))
        {
            //             cout<<"Queue is Full";
            return false;
        }
        else if (qfront == -1)
        {
            //             first element to push
            qfront = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 || qfront != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        // Write your code here.
        if (qfront == -1)
        {
            //             cout<<"Queue is empty"
            return -1;
        }
        int ans = arr[qfront];
        arr[qfront] = -1;
        if (qfront == rear)
        {
            //             single element
            qfront = rear = -1;
        }
        else if (qfront == size - 1)
        {
            //             to maintain cyclic nature
            qfront = 0;
        }
        else
        {
            qfront++;
        }
        return ans;
    }
};