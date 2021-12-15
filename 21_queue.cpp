#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Lakshay");
    q.push("Banga");
    q.push("Bruno");

    cout<<q.front()<<endl;

    cout<<q.size();

    

    return 0;
}