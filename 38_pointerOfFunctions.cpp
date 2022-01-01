#include <iostream>
using namespace std;
void print(int *p)
{

    cout << p << endl;
    cout << *p << endl;
}

void update(int *p)
{
    // p=p+1;
    // cout<<p<<endl;

    *p = *p + 1;
}

// When we pass the array to a function then it passes like a pointer and therefore its size will 8
int getsum(int arr[], int n)
{

    cout << "Size " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int val = 5;

    int *p = &val;

    // print(p);
    cout << p << endl;
    update(p);
    cout << p << endl;
    cout << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << getsum(arr, 5) << endl;
    ;
    return 0;
}