#include <iostream>
using namespace std;

bool checkpalindrome(string ch, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (ch[i] == ch[j])
    {

        return checkpalindrome(ch, j - 1, i + 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string ch;
    cin >> ch;

    bool ans = checkpalindrome(ch, 0, ch.length() - 1);

    if (ans == true)
    {
        cout << "Y";
    }
    else
    {
        cout << "N";
    }

    return 0;
}