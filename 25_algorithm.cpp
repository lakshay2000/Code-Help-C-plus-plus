#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout<<binary_search(v.begin(),v.end(),5);
    cout<<endl;

    int a=5;int b=7;
    cout<<max(a,b)<<endl;

    swap(a,b);

    cout<<a<<" "<<b<<endl;

    string abc="abcd ";

    reverse(abc.begin(),abc.end());
    cout<<abc;



    return 0;
}