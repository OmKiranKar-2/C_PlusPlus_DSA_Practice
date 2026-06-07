// https://leetcode.com/problems/4sum/

#include<iostream>
#include<vector>
#include<algorithm>

//Use 2-pointer Approach
// TC: O(nlogn + n^3), SC: O(Unique Quadruplets)
std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target)
{
    std::vector<std::vector<int>> answer;
    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++)
    {
        if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }

        for(int j=i+1;j<nums.size();j++)
        {
            if(j>i+1 && nums[j]==nums[j-1])
            {
                continue;
            }
            
            int start = j+1, end=nums.size()-1;
            while(start<end)
            {
                long sum = (long)nums[i] + (long)nums[j] + (long)nums[start] + (long)nums[end];
                if(sum<target)
                {
                    start++;
                }
                else if(sum>target)
                {
                    end--;
                }
                else if(sum==target)
                {
                    answer.push_back({nums[i],nums[j],nums[start],nums[end]});
                    start++;
                    end--;
                    while(start<end && nums[start]==nums[start-1])
                    {
                        start++;
                    }
                }
            }
        }
    }
    return answer;
}

int main()
{
    std::vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0; // Output: {{-2,-1,1,2},{-2,0,0,2},{-1,0,0,1}}
    std::vector<std::vector<int>> vec = fourSum(nums,target);
    for(std::vector<int> i: vec)
    {
        for(int j:i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}