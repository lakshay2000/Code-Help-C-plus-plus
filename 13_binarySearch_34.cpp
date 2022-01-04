#include <iostream>
using namespace std;

int peakmountain(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    // your code goes here

    int t;
    cin >> t;

    while (t > 0)
    {

        int arr[5] = {1, 3, 5, 4, 2};

        // for (int i; i < n; i++)
        // {
        //     cin >> arr[i];
        // }

        cout << peakmountain(arr, 5);

        t--;
    }

    return 0;
}