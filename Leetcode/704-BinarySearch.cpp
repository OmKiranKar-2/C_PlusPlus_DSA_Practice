// https://leetcode.com/problems/binary-search/

#include<iostream>
#include<vector>

int binarySearch(std::vector<int>& nums, int target)
{
    int start =0, end=nums.size()-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> nums;
    int target = 9;
    std::cout<<"Index: "<<binarySearch(nums,target);
    return 0;
}