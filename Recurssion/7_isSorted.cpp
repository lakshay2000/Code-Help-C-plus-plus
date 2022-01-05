#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaining = isSorted(arr + 1, size - 1);
        return remaining;
    }
}

int main()
{

    int arr[5] = {2, 3, 4, 5, 6};

    cout << isSorted(arr, 5);

    return 0;
}