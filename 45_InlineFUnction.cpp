#include <iostream>
using namespace std;

void fun(int a, int b)
{
    a++;
    b++;
    cout << a << " " << b << endl;
}
int main()
{
    // inline function are used to reduce the function calls overhead
    // but the inline function should be of max 3 lines
    // Advantages
    // no extra memory usage
    // no overhead function calls
    int a = 1;
    int b = 2;
    fun(a, b);
    return 0;
}