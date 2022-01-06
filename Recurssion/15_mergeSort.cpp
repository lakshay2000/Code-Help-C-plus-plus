#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid)
{

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values to 2 arrays

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[s + i];
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mid + 1 + i];
    }

    // merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;

    int k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k] = first[index1];
            k = k + 1;
            index1 = index1 + 1;
        }
        else
        {
            arr[k] = second[index2];
            k = k + 1;
            index2 = index2 + 1;
        }
    }

    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}

void mergeSort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // left part sort
    mergeSort(arr, s, mid);

    mergeSort(arr, mid + 1, e);

    merge(arr, s, e, mid);
}
int main()
{
    int arr[6] = {7, 3, 2, 5, 4, 3};

    int n = 6;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}