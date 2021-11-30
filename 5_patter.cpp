// 1
// 2 1 
// 3 2 1 
// 4 3 2 1 

// This pattern can be solved by this pattern as well 
// i-j+1 

#include <iostream>
using namespace std;
int main()
{
    int n;
    int count;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        count=i;
        for (int j = 0; j < i; j++)
        {
            cout<<count<<" ";
            count=count-1;
        }
        cout<<endl;
        
    }
    
    return 0;
}