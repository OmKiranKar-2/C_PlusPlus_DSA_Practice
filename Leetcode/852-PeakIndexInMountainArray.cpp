// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
#include<iostream>
#include<climits>

int binarySearch(int* arr, int* size)
{
    int start = 1, end = *size-2;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]>arr[mid-1]) // Left Side Sorted
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}

// // Another Method
// int binarySearch(int* arr, int* size)
// {
//     int start = 0, end = *size-1;
//     int peakElement = INT_MIN, peakIndex;
//     while(start<=end)
//     {
//         int mid = start + (end-start)/2;
//         peakElement = std::max(peakElement,arr[mid]);
//         if(peakElement<=arr[mid])
//         {
//             peakIndex=mid;
//         }
//         if(mid!=0 && arr[mid]>arr[mid-1])
//         {
//             start = mid+1;
//         }
//         else if(mid==0 && arr[mid]<arr[mid+1])
//         {
//             start = mid+1;
//         }
//         else if(mid!=*size-1 && arr[mid]>arr[mid+1])
//         {
//             end = mid-1;
//         }
//         else if(mid==*size-1 && arr[mid]>arr[mid-1])
//         {
//             end = mid-1;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return peakIndex;
// }

int main()
{
    int arr[] = {24,69,100,99,79,78,67,36,26,19};
    int size = sizeof(arr)/sizeof(int);
    std::cout<<"Peak Element: "<<binarySearch(arr,&size);
    return 0;
}