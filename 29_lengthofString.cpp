#include <iostream>
using namespace std;
int main()
{
    char name[10];
    cin>>name;
    int getLen=0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        getLen++;
    }

    cout<<getLen;
    

    return 0;
}