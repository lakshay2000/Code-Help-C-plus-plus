// A 
// B B
// C C C 


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            ch = 'A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}