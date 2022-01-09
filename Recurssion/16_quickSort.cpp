#include <iostream>
using namespace std;

int patition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // placing pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // partition

    int p = patition(arr, s, e);

    // left part sort

    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{

    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}