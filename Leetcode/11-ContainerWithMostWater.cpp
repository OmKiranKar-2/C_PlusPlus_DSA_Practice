// https://leetcode.com/problems/container-with-most-water/description/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> heights = {1,8,6,2,5,4,8,3,7}; // Container between Index 1 and 8 gives maximum water
    int maxWater=0, minIndex;
    //Brute Force Approach
    for(int i=0;i<heights.size();i++)
    {
        for(int j=i+1;j<heights.size();j++)
        {
            minIndex = std::min(heights[i],heights[j]);
            maxWater = std::max(maxWater, minIndex*(j-i));
        }
    }
    std::cout<<maxWater;
    return 0;
}