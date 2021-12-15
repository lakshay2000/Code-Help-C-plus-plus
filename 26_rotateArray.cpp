#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}



int main()
{
    vector<int> v {9,8,7,6,5,4};
    vector<int> ans=reverse(v);

    for(auto i:ans){
        cout<<i<<" ";
    }
    
    return 0;
    
}