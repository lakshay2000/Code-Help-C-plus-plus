// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 


#include<iostream>
using namespace std;
int main(){
    int n,i=0,j;
    cin>>n;
    while(i<n){
       j=1;
       while(j<=n){
        //    cout<<j;
           cout<<n-j+1;
           j=j+1;
       }
       cout<<"\n";
       i=i+1;
        
    }
    
return 0;
}