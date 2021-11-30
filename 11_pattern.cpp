// D
// C D 
// B C D
// A B C D



#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    for (int i = 1; i <= n; i++)
    {
        ch='A'+n-i;
        for (int j = 1; j <= i; j++)
        {
            cout<<char(ch+j-1)<<" ";
            
        }
        cout<<endl;
        
    }
    

    return 0;
}