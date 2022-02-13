// QUEUE follows FIFO

// push-rear;
// pop - front

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<int> q;

    q.push(11);
    cout << "Front is " << q.front() << endl;
    q.push(22);
    cout << "Front is " << q.front() << endl;
    q.push(33);
    cout << "Front is " << q.front() << endl;

    cout << "Size is " << q.size() << endl;

    q.pop();

    cout << "Size is " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}