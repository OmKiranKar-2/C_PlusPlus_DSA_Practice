// https://leetcode.com/problems/subarray-sum-equals-k/description/

#include<iostream>
#include<vector>
#include<algorithm>

// Brute Force Approach, TC: O(n^2), SC: O(1)
int subArraySum(std::vector<int>& nums, int k)
{
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        int sum=0;
        for(int j=i;j<nums.size();j++)
        {
            sum += nums[j];
            if(sum==k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    std::vector<int> nums = {9,4,20,3,10,5,33};
    int k = 33; //Output: 3 -> {9,4,20}, {20,3,10} and {33}
    std::cout<<"Nums of Subarrays are: "<<subArraySum(nums,k);
    return 0;
}