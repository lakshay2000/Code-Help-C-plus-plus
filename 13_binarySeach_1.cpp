// FInd the First and last occurrence of an array 

#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int s=0; int e=n-1;
    int mid= s + (e-s)/2;
    int ans=0;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
    mid= s + (e-s)/2;

    }
    return ans;
    
}
int lastOccurence(int arr[],int n,int key){
    int s=0; int e=n-1;
    int mid= s + (e-s)/2;
    int ans=0;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
    mid= s + (e-s)/2;

    }
    return ans;
    
}


int main()
{
    int even[5]={1,2,3,3,5};
    cout<<firstOccurence(even,5,3)<<endl;
    cout<<lastOccurence(even,5,3);
    return 0;
}