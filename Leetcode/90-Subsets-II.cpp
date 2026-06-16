// https://leetcode.com/problems/subsets-ii/description/

// Similar to Leetcode/78-Subsets.cpp, only difference is here array may contain duplicates
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

// Optimized Approach: After excluding duplicate element from graph, do not include to avoid repition
void helperFunction(std::vector<int>& nums,std::vector<int>& tempArray, int currentIdx, std::vector<std::vector<int>>& answer, std::set<std::vector<int>>& s)
{
    if(currentIdx == nums.size())
    {
        answer.emplace_back(tempArray);
        return;
    }
    tempArray.emplace_back(nums[currentIdx]);
    helperFunction(nums,tempArray,currentIdx+1,answer,s);
    tempArray.pop_back();
    int tempIdx = currentIdx+1;
    while(tempIdx<nums.size() && nums[tempIdx]==nums[tempIdx-1]) // To skip from including duplicate elements
    {
        tempIdx++;
    }
    helperFunction(nums,tempArray,tempIdx,answer,s);
}

// // Approach using sets [Intuitive approach though TC and SC increases a bit]
// void helperFunction(std::vector<int>& nums,std::vector<int>& tempArray, int currentIdx, std::vector<std::vector<int>>& answer, std::set<std::vector<int>>& s)
// {
//     if(currentIdx == nums.size())
//     {
//         if(s.find(tempArray)==s.end())
//         {
//             s.insert(tempArray);
//             answer.emplace_back(tempArray);
//         }
//         return;
//     }
//     tempArray.emplace_back(nums[currentIdx]);
//     helperFunction(nums,tempArray,currentIdx+1,answer,s);
//     tempArray.pop_back();
//     helperFunction(nums,tempArray,currentIdx+1,answer,s);
// }

// 2 choice: If the element wants to be included or excluded
std::vector<std::vector<int>> subsets(std::vector<int>& nums)
{
    std::vector<std::vector<int>> answer;
    std::vector<int> tempArray;
    std::set<std::vector<int>> s;
    sort(nums.begin(),nums.end()); // Very Important step
    helperFunction(nums,tempArray,0,answer,s);
    return answer;
}

int main()
{
    std::vector<int> nums = {1,2,2}; // Output: {{},{1},{2},{1,2},{2,2},{1,2,2}}
    std::vector<std::vector<int>> answer = subsets(nums);
    std::cout<<"{ ";
    for(std::vector<int> i : answer)
    {
        std::cout<<"{";
        for(int j: i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<"} ";
    }
    std::cout<<"}";
    return 0;
}