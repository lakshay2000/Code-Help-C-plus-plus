// A 
// B C 
// C D E 
// D E F G




#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch='A'+j+i-2;
            cout<<ch<<" ";
            ch=ch+1;

        }
        cout<<endl;
        
    }
    
    return 0;
}