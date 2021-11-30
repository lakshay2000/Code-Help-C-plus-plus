// A B C
// B C D 
// C D E 


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    for (int i = 1; i <= n; i++)
    {
        ch='A'+i-1;
        for (int j = 1; j <= n; j++)
        {
            cout<<ch<<" ";
            ch=ch+1;
        }

        cout<<endl;
        
    }
    
    return 0;
}