#include <iostream>
using namespace std;

int fact(int n)
{

    // Base Case (return madatory)
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int ans;

    ans = fact(n);

    cout << ans;
    return 0;
}