// https://leetcode.com/problems/next-permutation/
// STL: next_permutation(vec.begin(),vec.end())
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

void reverseArray(std::vector<int>& nums,int start, int end)
{
    while(start<end)
    {
        std::swap(nums[start++],nums[end--]);
    }
}

// Return lexicographically next element
void nextPermutation(std::vector<int>& nums)
{
    int pivot=-1,size=nums.size();
    for(int i=size-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            pivot=i;  // Index after which all the element are in increasing order
            break;
        }
    }
    if(pivot==-1)  // Lexicographic end has been reached and reset to first order
    {
        reverseArray(nums,0,size-1);
        return;
    }
    for(int i=size-1;i>pivot;i--) // Element just greater than pivot element to swap for just the next lexicography
    {
        if(nums[i]>nums[pivot])
        {
            std::swap(nums[i],nums[pivot]);
            break;
        }
    }
    // std::sort(nums.begin()+pivot+1,nums.end()); // It increases the TC: O(n*logn)
    reverseArray(nums,pivot+1,size-1); // Reverse the elements after pivot to change from descending to ascending order
}
// 1,5,3,7,6,4 -> Pivot=3 -> Next iteration: 1,5,4,3,6,7 (Sort element after pivot swapping with next bigger number)

int main()
{
    std::vector<int> nums = {3,1,2};
    // next_permutation(nums.begin(),nums.end()); // TC: O(n), SC:O(1)
    nextPermutation(nums);
    for(int i:nums)
    {
        std::cout<<i<<" ";
    }
    return 0;
}