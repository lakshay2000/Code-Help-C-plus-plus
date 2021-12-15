#include <iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"FIrst index element "<<d.at(1)<<endl;
    cout<<d.max_size()<<endl;

    cout<<d.empty()<<endl;
    // d.clear();
    // cout<<d.empty()<<endl;
    // cout<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);


    return 0;
}