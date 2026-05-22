// Logic for Binary Search written in Algorithm/BinarySearch.cpp
#include<iostream>

int binarySearch(int* arr, int* target, int start, int end) //TC: O(logn), SC: O(logn)
{
    if(start>end)
    {
        return -1;
    }
    int mid = start + (end-start)/2;
    if(arr[mid]==*target)
    {
        return mid;
    }
    if(arr[mid]>*target)
    {
        return binarySearch(arr,target,start,mid-1);
    }
    else
    {
        return binarySearch(arr,target,mid+1,end);
    }
}

int main()
{
    int arr[] = {-1,0,3,4,6,9,12}; // Array should be sorted
    int target = 9;
    int start = 0, end = sizeof(arr)/sizeof(int) - 1;
    std::cout<<"Index is: "<<binarySearch(arr,&target,start,end);
    return 0;
}