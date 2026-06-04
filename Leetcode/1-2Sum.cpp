// https://leetcode.com/problems/two-sum/description/

#include<iostream>
#include<algorithm>
#include<unordered_map>

// Use Hashing
std::pair<int,int> twoSum(int* nums, int& target, int& size) // TC: O(n)
{
    std::unordered_map<int,int> m; // Value, Index
    for(int i=0;i<size;i++)
    {
        int first = nums[i];
        int second = target-first;
        if(m.find(second)!=m.end())
        {
            return {i,m[second]};
        }
        m.emplace(nums[i],i); // Add elements in map
    }
    return {-1,-1};
}

// // More Optimized Approach
// std::pair<int,int> twoSum(int* nums, int& target, int& size) // TC: O(n*log n)
// {
//     std::pair<int,int> p; // vector<int> p;
//     std::sort(nums,nums+size); // 2, 5, 7, 11, 15
//     int start = 0, end= size-1;
//     while(start<end)
//     {
//         int sum = nums[start]+nums[end];
//         if(sum==target)
//         {
//             return {start,end};
//         }
//         else if(sum<target)
//         {
//             start++;
//         }
//         else if(sum>target)
//         {
//             end--;
//         }
//         std::cout<<sum<<" ";
//     }
//     return {-1,-1};
// }

int main()
{
    int nums[] = {5,2,11,7,15} , target=9;
    int size = sizeof(nums)/sizeof(int);
    std::pair<int,int> p = twoSum(nums, target, size);
    std::cout<<"The indices for 2 Sum: "<<p.first<<" "<<p.second;
    return 0;
}