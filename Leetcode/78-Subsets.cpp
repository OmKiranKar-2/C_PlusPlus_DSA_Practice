// https://leetcode.com/problems/subsets/description/

// Use Recursion Backtracking
#include<iostream>
#include<vector>

// TC: , SC: 
std::vector<std::vector<int>> subsets(std::vector<int>& nums)
{
    // 2 choice: If the element wants to be included or excluded
    std::vector<std::vector<int>> answer;
}

int main()
{
    std::vector<int> nums = {1,2,3}; // Output: {{},{1},{2},{1,2},{3},{1,3},{2,3},{1,2,3}}
    std::vector<std::vector<int>> answer = subsets(nums); // Total number of subsets will be: 2^nums.size()
    std::cout<<"{";
    for(std::vector<int> i : answer)
    {
        std::cout<<"{";
        for(int j : i)
        {
            std::cout<<j<<", ";
        }
        std::cout<<"}, ";
    }
    std::cout<<"}";
    return 0;
}