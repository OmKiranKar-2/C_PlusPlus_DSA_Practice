// https://leetcode.com/problems/container-with-most-water/description/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> heights = {1,8,6,2,5,4,8,3,7}; // Container between Index 1 and 8 gives maximum water
    int maxWater=0, minIndex;
    // Optmized Approach -> TC: O(n) [Use Two Pointer Approach]
    int leftPtr=0, rightPtr=heights.size()-1;
    while(leftPtr<rightPtr)
    {
        minIndex = std::min(heights[leftPtr],heights[rightPtr]);
        maxWater = std::max(maxWater, minIndex*(rightPtr-leftPtr));
        if(heights[leftPtr]>heights[rightPtr])
        {
            rightPtr--;
        }
        else
        {
            leftPtr++;
        }
    }
    std::cout<<maxWater;

    // //Brute Force Approach -> TC: O(n^2)
    // for(int i=0;i<heights.size();i++)
    // {
    //     for(int j=i+1;j<heights.size();j++)
    //     {
    //         minIndex = std::min(heights[i],heights[j]);
    //         maxWater = std::max(maxWater, minIndex*(j-i));
    //     }
    // }
    // std::cout<<maxWater;
    return 0;
}