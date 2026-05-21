// https://leetcode.com/problems/product-of-array-except-self/description/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> nums = {1,2,3,4}; // Output: {24,12,8,6}
    std::vector<int> productArray(nums.size(),1);
    
    // Most Optimal Solution -> O(n), SC: O(1). For better understanding, see the below less optimal solution
    for(int i=1;i<nums.size();i++)
    {
        productArray[i] = productArray[i-1]*nums[i-1];
    }
    int product = 1;
    for(int i=nums.size()-2;i>=0;i--)
    {
        product *= nums[i+1];
        productArray[i] *= product;
    }

    // // Optimized Approach, but SC is not optmized -> TC: O(n), SC: O(n)
    // std::vector<int> prefixProduct(nums.size(),1);
    // std::vector<int> suffixProduct(nums.size(),1);
    // int product = 1;
    // for(int i=1;i<nums.size();i++)
    // {
    //     product *= nums[i-1];
    //     prefixProduct[i] = product;
    // }
    // product = 1;
    // for(int i=nums.size()-2;i>=0;i--)
    // {
    //     product *= nums[i+1];
    //     suffixProduct[i] = product;
    // }
    // for(int i=0;i<nums.size();i++)
    // {
    //     productArray.at(i) = prefixProduct[i] * suffixProduct[i];
    // }

    // // Brute Force Approach -> TC: 0(n^2)
    // for(int i=0;i<nums.size();i++)
    // {
    //     for(int j=0;j<nums.size();j++)
    //     {
    //         if(i==j)
    //         {
    //             continue;
    //         }
    //         productArray[i] *= nums[j];
    //     }
    // }

    for(int i=0;i<productArray.size();i++)
    {
        std::cout<<productArray.at(i)<<" ";
    }
    return 0;
}