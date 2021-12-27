#include <iostream>
// #include <string.h>
// #include <ctype.h>

using namespace std;
int main()
{
    char name[10];
    cin >> name;
    int getLen = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        getLen++;
    }

    cout << getLen << endl;

    int s = 0;
    int e = getLen - 1;
    while (s <= e)
    {
        if (char(toupper(name[s]))!=char(toupper(name[e])))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    cout << "Plaindrome";

    cout<<char(toupper(name[0]));
    

    return 0;
}