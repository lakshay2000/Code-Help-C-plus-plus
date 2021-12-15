#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector <int> v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;

    // capacity-kitne elements ke liye space assign hua pda h 
    // size- kitne elements h 
    cout<<v.size()<<endl;

    cout<<v.front()<<endl;
    v.pop_back();
    
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    // whenever we do v.clear() then the size of vector will get zero and not the capaicity 
    vector <int> a(5,1);
    for(auto& i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector <int> last(a);

    for(auto& i:last){
        cout<<i<<" ";
    }
    

    return 0;
}