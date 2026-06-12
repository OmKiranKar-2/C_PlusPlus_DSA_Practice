// https://leetcode.com/problems/subarray-sum-equals-k/description/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

// Optmized Approach, TC: O(n), SC: O(1)
// Prefix Sum Approach Used. It is a very important concept
int subArraySum(std::vector<int>& nums, int k)
{
    int prefixSum[nums.size()]; // Store the sum of array till index i
    int count=0; // To store number of subArray equals m
    prefixSum[0]=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        prefixSum[i] = prefixSum[i-1]+nums[i]; // 9,13,13,33,36,46,51,84
    }
    std::unordered_map<int,int> m; // prefixSum, Freq
    for(int i=0;i<nums.size();i++)
    {
        if(prefixSum[i]==k)
        {
            count++;
        }
        if(m.find(prefixSum[i]-k)!=m.end())
        {
            count += (*m.find(prefixSum[i]-k)).second;
        }
        m[prefixSum[i]]++;
    }
    return count;
}

// // Brute Force Approach, TC: O(n^2), SC: O(1)
// int subArraySum(std::vector<int>& nums, int k)
// {
//     int count=0;
//     for(int i=0;i<nums.size();i++)
//     {
//         int sum=0;
//         for(int j=i;j<nums.size();j++)
//         {
//             sum += nums[j];
//             if(sum==k)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int main()
{
    std::vector<int> nums = {9,4,0,20,3,10,5,33};
    int k = 33; //Output: 4 -> {9,4,0,20}, {0,20,3,10}, {20,3,10} and {33}
    std::cout<<"Nums of Subarrays are: "<<subArraySum(nums,k);
    return 0;
}