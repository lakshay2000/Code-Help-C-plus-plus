#include <iostream>
using namespace std;

int calculate(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = calculate(a, b / 2);

    if (b & 1)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

// when power is even a^b= a^(b/2)*a^(b/2)
// when power is odd a^b= a* a^(b/2)*a^(b/2)

int main()
{

    int a;
    int b;

    cin >> a >> b;

    int ans = calculate(a, b);

    cout << ans;

    return 0;
}