#include <iostream>
using namespace std;
bool found(int arr[], int key, int s, int e)
{

    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return found(arr, key, mid + 1, e);
    }
    else
    {
        return found(arr, key, s, mid - 1);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;

    int ans = found(arr, key, 0, 4);

    if (ans)
    {
        cout << "mil gya";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}