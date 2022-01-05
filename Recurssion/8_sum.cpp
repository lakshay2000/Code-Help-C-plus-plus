#include <iostream>
using namespace std;

int Sumarray(int arr[], int size)
{
    if (size <= 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remaining = Sumarray(arr + 1, size - 1);

    int sum = arr[0] + remaining;
    return sum;
}

int main()
{

    int arr[5] = {2, 3, 4, 5, 6};

    cout << Sumarray(arr, 5);

    return 0;
}