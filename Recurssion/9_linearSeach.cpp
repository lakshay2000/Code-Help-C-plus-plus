#include <iostream>
using namespace std;

bool found(int arr[], int key, int size)
{

    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remain = found(arr + 1, key, size - 1);
        return remain;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;

    int ans = found(arr, key, 5);

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