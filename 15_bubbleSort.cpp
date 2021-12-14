
// Time Complexity - O(n^2)
// Space Complexity - constant 
// best case - O(N)
// Worst Case - O(N^2)

// In-place soting?
// stable or non-stable 


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped=false)
            break;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main()
{
    vector<int> v1{9,8,7,6,5,4};
    bubbleSort(v1,6);


    return 0;
}