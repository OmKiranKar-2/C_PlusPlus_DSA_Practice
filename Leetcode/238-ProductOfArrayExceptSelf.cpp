// https://leetcode.com/problems/product-of-array-except-self/description/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> nums = {1,2,3,4}; // Output: {24,12,8,6}
    std::vector<int> productArray(nums.size(),1);

    // Brute Force Approach -> TC: 0(n^2)
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            if(i==j)
            {
                continue;
            }
            productArray[i] *= nums[j];
        }
    }

    for(int i=0;i<productArray.size();i++)
    {
        std::cout<<productArray.at(i)<<" ";
    }
    return 0;
}