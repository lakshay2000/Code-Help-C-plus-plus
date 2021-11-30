// 1
// 2 3 
// 3 4 5 
// 4 5 6 7 


#include <iostream>
using namespace std;
int main()
{
    int n;
    // int count=1;
    cin>>n;
    int count;
    for (int i = 1; i <= n; i++)
    {
        count=i;
        for (int j = 0; j < i; j++)
        {
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;

        

    }
    
    return 0;
}