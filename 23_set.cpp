// Set stored all the unique elements
// It implements on BSt
// modification does not take place
// it returns in sorted order
// sorted set is slower than unordered set
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(6);
    s.insert(5);

    for(auto i:s){
        cout<<i<<endl;
    }
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }

    cout<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(4);

    for(auto i=itr;i!=s.end();i++){
        cout<<*i<<" ";
    }


    return 0;
}