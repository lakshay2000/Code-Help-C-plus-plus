// LIFO order maintains in STACK
// LIFO- Last In First Out

// operations - Push,Pop,Peak(top element),empty

#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            // empty space is avaialable
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{ /*
  // creation of stack

  stack<int> s;
  s.push(2);
  s.push(3);

  s.pop();

  cout << "Printing Top Element " << s.top() << endl;

  if (s.empty())
  {
      cout << "Stack is Empty" << endl;
  }
  else
  {
      cout << "Stack is not Empty" << endl;
  }

  cout << "Size of Stack is " << s.size() << endl;

  */
    Stack st(5);

    st.push(22);
    st.push(33);
    st.push(43);
    // st.push(22);
    // st.push(33);
    // st.push(43);

    cout << st.peek() << endl;

    st.pop();
    // st.pop();
    // st.pop();
    // st.pop();

    cout << st.peek() << endl;

    if (st.isempty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    return 0;
}