// stores in key-value pair
// key will always be unique but value can be same
// Returns sorted order 

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="Lakshay";
    m[2]="Banga";
    m[20]="Bruno";
    m.insert({5,"Hello"});

    for(auto i:m){
        cout<<i.first<<" ";
        cout<<i.second<<" ";
        cout<<endl;
    }
    cout<<m.count(5)<<endl;

    m.erase(1);

    for(auto i:m){
        cout<<i.first<<" ";
        cout<<i.second<<" ";
        cout<<endl;
    }

    auto it=m.find(2);
    for(auto i= it;i!=m.end();i++){
        cout<<(*i).first<<" ";
        cout<<(*i).second<<" ";
    }
    return 0;
}
