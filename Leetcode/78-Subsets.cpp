// https://leetcode.com/problems/subsets/description/

// Use Recursion Backtracking
#include<iostream>
#include<vector>

void helperFunction(std::vector<int>& nums, std::vector<int>& tempArray, int currentIdx,std::vector<std::vector<int>>& answer)
{
    if(currentIdx==nums.size())
    {
        answer.emplace_back(tempArray);
        return;
    }
    tempArray.emplace_back(nums[currentIdx]);
    helperFunction(nums,tempArray,currentIdx+1,answer);
    tempArray.pop_back();
    helperFunction(nums,tempArray,currentIdx+1,answer);
}

// 2 choice: If the element wants to be included or excluded
// TC: O(n * 2^n), SC:O(n * 2^n)
std::vector<std::vector<int>> subsets(std::vector<int>& nums)
{
    std::vector<std::vector<int>> answer;
    std::vector<int> tempArray;
    helperFunction(nums,tempArray,0, answer);
    return answer;
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
            std::cout<<j<<" ";
        }
        std::cout<<"} ";
    }
    std::cout<<"}";
    return 0;
}