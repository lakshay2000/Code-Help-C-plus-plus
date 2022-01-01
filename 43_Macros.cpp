// https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/
#include <iostream>

using namespace std;
// Macros
#define PI 3.14
#define min(a, b) ((a < b) ? a : b)

int main()
{
    // Macros- a piece of code in a program that is replaced by value of the macro

    // no semicolon is required in defining macros

    int r = 5;
    // double pie = 3.14;

    double area = PI * r * r;
    cout << "Area is " << area << endl;

    int a = 18;
    int b = 76;

    cout << "Minimum value between " << a << " and " << b << " is: " << min(a, b);

    return 0;
}