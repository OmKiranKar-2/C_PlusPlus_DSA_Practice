// https://leetcode.com/problems/split-array-largest-sum/description/

// Use Book Allocation Approach

#include<iostream>
#include<vector>
#include<climits>

bool isValid(std::vector<int>& nums, int& k, int& maxAllowedSum)
{
    int sum=0, count=1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>maxAllowedSum)
        {
            return false;
        }
        sum += nums[i];
        if(sum>maxAllowedSum)
        {
            sum = nums[i];
            count++;
        }
    }
    if(count<=k) return true;
    return false;
}

int MinimizeMaximumSum(std::vector<int>& nums, int& k)
{
    int maxSum=0,minSum=INT_MIN,answer=-1;
    if(nums.size()<k)
    {
        return answer;
    }
    for(int i=0;i<nums.size();i++)
    {
        maxSum += nums[i];
        minSum = std::max(minSum,nums[i]);
    }
    while(minSum<=maxSum)
    {
        int maxAllowedSum = minSum + (maxSum-minSum)/2;
        if(isValid(nums,k,maxAllowedSum))
        {
            maxSum = maxAllowedSum-1;
            answer = maxAllowedSum;
        }
        else
        {
            minSum = maxAllowedSum+1;
        }
    }
    return answer;
}

int main()
{
    std::vector<int> nums = {7,2,5,10,8};
    int k = 2;
    std::cout<<MinimizeMaximumSum(nums,k);
    return 0;
}