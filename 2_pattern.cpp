// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16


#include <iostream>
using namespace std;
int main()
{
    int n,i=0,j;
    cin>>n;
    int count =1;
    while(i<n){
        j=1;
        while(j<=n){
            cout<<count<< " ";
            count+=1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}