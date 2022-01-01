#include <iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // giving new variables names is not allowed in heap memory
    // and heap memory return the adress of the assigned vairable but we cannot assign name to it so therefore we can store that address through pointer
    // and we can access that memory allocated through the pointer which we created
    // stack memory always releases but heaps memory does not
    // to release the memory of heap just use delete keyword
    // int *p = new int;
    // delete p ;
    // int *p=new int[5];
    // delete []p;
    char ch = 'a';

    cout << sizeof(ch) << endl;

    char *c = &ch;
    cout << sizeof(c) << endl;

    // creating array of size 5 in heap memory
    int *arr = new int[5];

    int n;
    cin >> n;

    int *ar = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int ans = getsum(ar, n);

    cout << ans << endl;

    return 0;
}