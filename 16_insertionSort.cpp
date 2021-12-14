// Space Complexity - O(1)
// Time Complexity - O(n^2)
// Best Case - already sorted

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void insertionSort(int n, vector<int> &arr)
{
    // Write your code here

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                //                 shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    vector <int> ar{9,8,7,6,5,4};

    insertionSort(6,ar);
    
    return 0;
}