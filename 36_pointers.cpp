#include <iostream>
using namespace std;
int main()
{
    int arr[10]={2,4,6,8,7};

    cout<<"Adress of first memory block is: "<<arr<<endl;

    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;

    cout<<*arr<<endl;
    cout<<*arr +1<<endl;
    cout<<*(arr+1)<<endl;

    // arr[i]=*(arr+i);
    // or  
    // i[arr]=*(i+arr);

    int i=3;

    cout<<"Third index value is: "<<arr[3]<<endl;
    cout<<"Third index value is: "<<*(arr+3)<<endl;
    cout<<"Third index value is: "<<*(3+arr)<<endl;
    cout<<"Third index value is: "<<(3[arr])<<endl;

    // Difference btw pointers and arrays 

    // 1) arrays - no. of blocks X 4 ; pointers - 8 bytes (in case of integer )
    int *ptr = &arr[0];

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;

    cout<<sizeof(*arr)<<endl;
    cout<<sizeof(&arr)<<endl;

    cout<<"Second"<<endl;

    // 2) different output when we used adress (&) operator .-

    cout<<&arr<<endl;
    cout<<&ptr<<endl;

    int a[10];

    int *pr=&arr[0];

    cout<<pr<<endl;

    pr=pr+1;
    cout<<pr;

    

    return 0;
}