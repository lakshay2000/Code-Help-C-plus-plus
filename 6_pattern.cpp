// A A A 
// B B B 
// C C C 


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // char ch='A';
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A'+i-1;
            cout<<ch<<" ";
            
        }
        // ch=ch+1;
        cout<<endl;
        
    }
    
    return 0;
}