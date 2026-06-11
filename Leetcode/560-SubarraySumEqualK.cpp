// https://leetcode.com/problems/subarray-sum-equals-k/description/

#include<iostream>
#include<vector>

std::vector<std::vector<int>> subArraySum(std::vector<int>& nums, int k)
{
    
}

int main()
{
    std::vector<int> nums = {9,4,20,3,10,5,33};
    int k = 33; //Output: 3 -> {9,4,20}, {20,3,10} and {33}
    std::vector<std::vector<int>> vec = subArraySum(nums,k);
    std::cout<<"Nums of Subarrays are: "<<vec.size()<<std::endl;
    std::cout<<"The subarrays are,"<<std::endl;
    for(std::vector<int> i : vec)
    {
        for(int j : i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}