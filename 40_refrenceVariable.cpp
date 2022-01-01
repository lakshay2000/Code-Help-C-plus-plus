// same memory but different name

#include <iostream>
using namespace std;

int &func(int n)
{
    int num = n;
    int &ans = num;
    return ans;
    // BAD PRACTICE
}

void update1(int a)
{
    a++;
}
void update2(int &a)
{
    a++;
}
int main()
{

    int i = 5;

    int &j = i;

    cout << i << " " << j << endl;

    i++;

    cout << i << " " << j << endl;

    j++;

    cout << i << " " << j << endl;

    int n = 5;

    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;

    cout << func(1) << endl;

    return 0;
}