// https://leetcode.com/problems/permutations/

#include<iostream>
#include<vector>
#include<algorithm>

// TC: O(n * n!), SC: O(n + n!) = O(n!)
void helperFunction(std::vector<int>& nums, int currentIdx, std::vector<std::vector<int>>& answer)
{
    if(currentIdx==nums.size())
    {
        answer.emplace_back(nums);
        return;
    }
    for(int i=currentIdx;i<nums.size();i++)
    {
        std::swap(nums[i],nums[currentIdx]);
        helperFunction(nums,currentIdx+1,answer);
        std::swap(nums[i],nums[currentIdx]); // To revert nums to original position
    }
}

std::vector<std::vector<int>> permutations(std::vector<int>& nums)
{
    std::vector<std::vector<int>> answer;
    helperFunction(nums, 0, answer);
    return answer;
}

// // Second Approach
// // This is a more faster approach than backtracking, and it derive from 31-NextPermutation.cpp
// // Since we are learning backtracking, I kept that as main method
// void helperFunction(std::vector<int>& nums, std::vector<std::vector<int>>& answer)
// {
//     int pivot = -1;
//     answer.emplace_back(nums);
//     for(int i=nums.size()-2;i>=0;i--)
//     {
//         if(nums[i]<nums[i+1])
//         {
//             pivot = i; // After this, all elements in decending order
//             break;
//         }
//     }
//     if(pivot==-1)
//     {
//         reverse(nums.begin(),nums.end());
//         return;
//     }
//     for(int i=nums.size()-1;i>pivot;i--)
//     {
//         if(nums[i]>nums[pivot])
//         {
//             std::swap(nums[i],nums[pivot]);
//             break;
//         }
//     }
//     reverse(nums.begin()+pivot+1, nums.end());
//     return;
// }

// std::vector<std::vector<int>> permutations(std::vector<int>& nums)
// {
//     std::vector<std::vector<int>> answer;
//     int factCount=1;
//     for(int i=1;i<=nums.size();i++) // Total Permutation: n!
//     {
//         factCount *= i; 
//     }
//     for(int i=0;i<factCount;i++)
//     {
//         helperFunction(nums, answer);
//     }
//     return answer;
// }

int main()
{
    std::vector<int> nums={1,2,3}; // Output: {{1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}}
    std::vector<std::vector<int>> answer = permutations(nums);
    std::cout<<"{ ";
    for(std::vector<int> i: answer)
    {
        std::cout<<"{";
        for(int j : i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<"} ";
    }
    std::cout<<"}";
    return 0;
}