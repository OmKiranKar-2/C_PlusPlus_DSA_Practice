// https://leetcode.com/problems/find-the-duplicate-number/

#include<iostream>
#include<vector>
#include<unordered_set>

// //Since you need constant space, use Slow and Fast Pointer Approach.
// // Consider Index as node and value at the index at next node. Imagine array as a linked list.
// // TC: O(n)
int findDuplicate(std::vector<int>& nums)
{
    int slowPtr = nums[0], fastPtr = nums[0]; // Or slowPtr = 0, fastPtr = 0; in Step2, slowPtr will be zero
    // Increase till slow==fast
    do
    {
        slowPtr = nums[slowPtr]; // Increase +1
        fastPtr = nums[nums[fastPtr]]; // Increase+2
    }
    while (slowPtr!=fastPtr);

    slowPtr = nums[0]; // Step2
    while(slowPtr!=fastPtr)
    {
        slowPtr = nums[slowPtr]; // Increase +1
        fastPtr = nums[fastPtr]; // Increase +!
    }
    return slowPtr;
}


// // Using sets, having TC: O(n) & SC: O(n)
// int findDuplicate(std::vector<int>& nums)
// {
//     std::unordered_set<int> s;
//     for(int i=0;i<nums.size();i++)
//     {
//         if(s.find(nums[i])!=s.end())
//         {
//             return nums[i];
//         }
//         s.emplace(nums[i]);
//     }
//     return -1;
// }

int main()
{
    std::vector<int> nums = {3,1,3,4,2}; // Output: 3
    std::cout<<"Duplicate Number is: "<<findDuplicate(nums);
    return 0;
}
