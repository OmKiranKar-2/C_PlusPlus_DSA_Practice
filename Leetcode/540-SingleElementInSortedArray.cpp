// https://leetcode.com/problems/single-element-in-a-sorted-array/
#include<iostream>

// Optmized Method - Use Binary Search
int searchSingleElement(int* nums, int* size) // TC: O(log n)
{
    int start = 0, end = *size-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2; // Always odd number of elements will present
        if(mid == 0 || mid == *size-1)
        {
            return nums[mid];
        }
        else if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
        {
            return nums[mid];
        }
        
        if(mid%2 == 1) // Odd Number of Elements on Left Side
        {
            if(nums[mid]==nums[mid-1]) // No Single Element Present in Left Side
            {
                start = mid+1;
            }
            else // Single Element Present in Left Side
            {
                end = mid-1;
            }
        }
        else if(mid%2==0) // Even Number of Elements in Left Side
        {
            if(nums[mid]==nums[mid+1]) // No Single Element Present in Left Side
            {
                start = mid+1;
            }
            else // Single Element Present in Left Side
            {
                end = mid-1;
            }
        }
    }
    return -1;
}

// // Brute Force Method
// int searchSingleElement(int* nums, int* size) // TC: O(log n)
// {
//     for(int i=1;i<*size;i+=2) // TC: O(logn)
//     {
//         if(nums[i]!=nums[i-1])
//         {
//             return nums[i-1];
//         }
//     }
//     if(*size==1)
//     {
//         return nums[0];
//     }
//     return nums[*size-1];
// }

int main()
{
    int nums[] = {1,1,2,3,3,4,4,8,8};
    int size = sizeof(nums)/sizeof(int);
    std::cout<<"Single Element: "<<searchSingleElement(nums,&size);
    return 0;
}