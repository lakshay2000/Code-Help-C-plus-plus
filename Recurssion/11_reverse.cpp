#include <iostream>
using namespace std;

void reverseString(string &ch, int i, int n)
{

    if (i > n - i - 1)
    {
        return;
    }

    swap(ch[i], ch[n - i - 1]);
    i++;

    reverseString(ch, i, n);
}

int main()
{

    string ch = "abcdef";

    int n = ch.length();

    reverseString(ch, 0, n);

    cout << ch;

    return 0;
}