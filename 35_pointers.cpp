#include <iostream>
using namespace std;
int main()
{

    int num=5;

    cout<< num<<endl;

    cout<<"Adress of num is "<< &num<<endl;

    // pointers are used to store adress 

    // * - derefrence operator  

    int * ptr =&num;

    cout<<"The value of ptr is "<<*ptr<<endl;
    cout<<"The value inside ptr block  is i.e. address of num "<<ptr<<endl;
    cout<<"The Adress of ptr is "<<&ptr<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;


    int *p; //pointer to int is created and pointing to some garbadge value and it is a bad practise 

    cout<<p<<endl;
    cout<<&p<<endl;

    int *l=0;
    cout<<l<<endl;
    cout<<&l<<endl;


    int *a=&num;

    cout<<"before "<<num<<endl;
    (*a)++;
    cout<<"After "<<num<<endl;


    // copying a pointer 

    int *m=a;

    cout<<*a<<" "<<*m<<endl;
    cout<<a<<" "<<m<<endl;

    int i=3;

    int *t=&i;

    cout<<*t<<endl;
    (*t)++;
    cout<<*t<<endl;
    cout<<t<<endl;

    t=t+1;
    cout<<*t<<endl;
    cout<<t<<endl;





    return 0;
}