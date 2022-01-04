#include <iostream>
using namespace std;

void Forwardcounting(int n)
{

    if (n == 0)
    {
        cout << n << endl;
        return;
    }
    cout << n;
    Forwardcounting(n - 1);
}

void Backwardcounting(int n)
{
    if (n == 0)
    {
        cout << n;
        return;
    }
    Backwardcounting(n - 1);
    cout << n;
}

int main()
{
    int n;
    cin >> n;

    // Forwardcounting(n);
    Backwardcounting(n);
    return 0;
}