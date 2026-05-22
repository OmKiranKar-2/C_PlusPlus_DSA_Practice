// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
#include<iostream>

int binarySearch(int* nums, int& target, int& size)
{
    int start=0, end=size-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid]>=nums[start]) // Left Side Sorted
        {
            if(nums[mid]>target && target>=nums[start]) // Present in Left
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        else if(nums[mid]<=nums[end]) // Right Side Sorted
        {
            if(nums[mid]<target && target<=nums[end]) // Present in Right
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }


    }
    return -1;
}

// // Another way to write the logic
// int binarySearch(int* nums, int& target, int& size)
// {
//     int start=0, end=size-1;
//     while(start<=end)
//     {
//         int mid = start + (end-start)/2;
//         if(nums[mid]==target)
//         {
//             return mid;
//         }
//         if(nums[mid]>target) // Left Side
//         {
//             if(nums[mid]>=nums[start]) //Sorted
//             {
//                 if(nums[start]<=target)
//                 {
//                     end = mid - 1;
//                 }
//                 else
//                 {
//                     start = mid + 1;
//                 }
//             }
//             else // Unsorted
//             {
//                 end = mid-1;
//             }
//         } //{4,5,6,7,8,9,0,1,2}
//         else if(nums[mid]<target) // Right Side Search
//         {
//             if(nums[mid]<=nums[end]) // Sorted
//             {
//                 if(nums[end]>=target)
//                 {
//                     start = mid + 1;
//                 }
//                 else
//                 {
//                     end = mid - 1;
//                 }
//             }
//             else // Unsorted
//             {
//                 start = mid+1;
//             }
//         }
//     }
//     return -1;
// }

int main() // Using Binary Search
{
    int nums[] = {4,5,6,7,8,9,0,1,2}, target = 2;
    int size = sizeof(nums)/sizeof(int);
    std::cout<<"Index: "<<binarySearch(nums,target,size);
    return 0;
}