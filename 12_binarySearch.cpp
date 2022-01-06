#include <iostream>
using namespace std;

// time complexity - O(log n )

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    // int mid=(start+end)/2;
    int mid = start + (end - start) / 2;
    //  optimised way
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid=(start+end)/2;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 9, 10, 11};

    int index = binarySearch(even, 6, 82);
    int index2 = binarySearch(odd, 5, 8);
    cout << index << endl;
    cout << index2;

    return 0;
}