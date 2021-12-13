
// Selection Sort 
// Time complexity - O(n^2) 

// best case - already sorted O(n^2)
// Worst case O(n^2)
// array size must be small 
// unstable or stable ?

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}


int main()
{   
   vector<int> arr{9,8,7,6,5,4};
   selectionSort(arr,6);
    

    return 0;
}