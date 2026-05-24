/* Question:
Given are N boards of length of each given in the form of array, and M painters.
Each painter takes atleast 1 unit of time to paint 1unit of board.
The task is to find the minimum time to paint all boards.
Constraint: Any painter will only paint consecutive sections of the board.
*/
// Use Book Allocation Problem Approach (Binary Search)

#include<iostream>
#include<vector>
#include<climits>

// Minimize the Maximum Value
bool isValid(std::vector<int>& nums, int& n, int& m, int maximumAllowedTime)
{
    int sum=0, painterCount=1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>maximumAllowedTime)
        {
            return false;
        }
        sum += nums[i];
        if(sum>maximumAllowedTime)
        {
            sum=nums[i];
            painterCount++;
        }
    }
    if(painterCount<=m) return true;
    return false;
}

int painterPartition(std::vector<int>& nums, int& n, int& m) // TC: O(n*log sum)
{
    int maxTime=0, minTime=INT_MIN, answer=-1;
    for(int i=0;i<n;i++)
    {
        maxTime += nums[i];
        minTime = std::max(minTime,nums[i]);
    }
    while(minTime<=maxTime)
    {
        int maximumAllowedTime = minTime + (maxTime-minTime)/2;
        if(isValid(nums,n,m,maximumAllowedTime)) // Maximum Allowed Time is Valid
        {
            answer = maximumAllowedTime;
            maxTime = maximumAllowedTime - 1;
        }
        else // Maximum Allowed Time is Not Valid
        {
            minTime = maximumAllowedTime + 1;
        }
    }
    return answer;
}

int main()
{
    std::vector<int> nums = {40,30,10,20}; //40,30,10,20 -> M1:40 & M2:30+10+20=60 -> Return 60
    int n = nums.size();
    int m = 2; 
    std::cout<<"Minimum time to paint all board: "<<painterPartition(nums,n,m);
    return 0;
}