
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.


#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[j], nums[i]);
                i++;
            }
        }
        for(auto& i:nums){
            cout<<i<<" ";
        }
    }
};

int main()
{
    Solution s;
    vector<int> arr{0, 0, 0, 0, 2, 3, 6};
    s.moveZeroes(arr);
    return 0;
}