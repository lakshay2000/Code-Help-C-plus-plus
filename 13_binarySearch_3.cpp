// To find the square root 


class Solution {
public:
    
    int binarySearch(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

    int mySqrt(int x) {
        return binarySearch(x);
        
    }
};

double morePreciseNumber(int n,int precision,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for (double j = ans; j*j<n; j=j+factor)
        {
            ans=j;
        }
        
    }
        return ans;

}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    Solution s;
    // cout<<s.mySqrt(100);
    int temp1=s.mySqrt(n);
    cout<<morePreciseNumber(n,3,temp1);

return 0;
}