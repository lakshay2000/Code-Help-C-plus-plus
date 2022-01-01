#include <iostream>
using namespace std;

// It start with the rightmost args

void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[5] = {1, 4, 5, 6, 8};

    print(arr, 5, 4);

    return 0;
}