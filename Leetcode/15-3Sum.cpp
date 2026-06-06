// https://leetcode.com/problems/3sum/description/

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<unordered_set>

// Optimized Approach : 2-Pointer Approach. TC: o(n^2 * nlogn), SC: O(unique triplets)
std::vector<std::vector<int>> threeSum(std::vector<int> nums)
{
    std::sort(nums.begin(),nums.end());
    std::vector<std::vector<int>> answer;
    for(int i=0;i<nums.size();i++)
    {
        if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }
        int start=i+1, end=nums.size()-1;
        while(start<end)
        {
            if(nums[i]+nums[start]+nums[end]==0)
            {
                
                answer.push_back({nums[i],nums[start],nums[end]});
                // std::vector<int> vec{nums[i],nums[start],nums[end]};
                // if(answer.size()==0 || answer[answer.size()-1] != vec)
                // {
                //     answer.emplace_back(vec);
                // }
                start++; end--;
                while(start<end && nums[start]==nums[start-1])
                {
                    start++;
                }
            }
            else if(nums[i]+nums[start]+nums[end]<0)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    return answer;
}

// // More Optimal Approach : Hashing. // TC: O(n^2 * log(unique triplets))
// std::vector<std::vector<int>> threeSum(std::vector<int> nums)
// {
//     std::set<std::vector<int>> s1; // To store unique triplets
//     std::vector<std::vector<int>> answer;
//     for(int i=0;i<nums.size();i++)
//     {
//         std::unordered_set<int> s2; // To store every element in sets
//         for(int j=i+1;j<nums.size();j++)
//         {
//             int k = -(nums[i]+nums[j]);
//             if(s2.find(k)!=s2.end())
//             {
//                 std::vector<int> vec{nums[i],nums[j],k};
//                 std::sort(vec.begin(),vec.end());
//                 if(s1.find(vec)==s1.end())
//                 {
//                     answer.emplace_back(vec);
//                     s1.emplace(vec);
//                 }
//             }
//             s2.emplace(nums[j]);
//         }
//     }
//     return answer;
// }

// // Brute Force Approach. TC: O(n^3 * log (uniquetriplets)); SC: O(unique triplets)
// std::vector<std::vector<int>> threeSum(std::vector<int> nums)
// {
//     std::set<std::vector<int>> s; // To store unique triplets, for unordered_Set you need hashing, hence set is used
//     std::vector<std::vector<int>> answer;
//     for(int i=0;i<nums.size()-2;i++)
//     {
//         for(int j=i+1;j<nums.size()-1;j++)
//         {
//             for(int k=j+1;k<nums.size();k++)
//             {
//                 if(nums[i]+nums[j]+nums[k]==0)
//                 {
//                     std::vector<int> vec = {nums[i],nums[j],nums[k]};
//                     sort(vec.begin(),vec.end()); // Sort the unique triplets
//                     if(s.find(vec)==s.end())
//                     {
//                         answer.push_back(vec);
//                         s.emplace(vec);
//                     }
//                 }
//             }
//         }
//     }
//     return answer;
// }

int main()
{
    std::vector<int> nums = {-1,0,1,2,-1,-4}; // Output: {{-1,-1,2},{-1,0,1}}. Return unique triplets
    std::vector<std::vector<int>> answer = threeSum(nums);
    for(std::vector<int> i: answer)
    {
        for(int j : i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    } 
    return 0;
}