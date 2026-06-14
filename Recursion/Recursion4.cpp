// Binary Search Using Recursion
#include<iostream>
#include<vector>

// TC: O(log n), SC: O(log n)
int binarySearch(int* arr, int* target, int start, int end)
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
    if(arr[mid]<*target)
    {
        return binarySearch(arr,target,mid+1,end);
    }
    else
    {
        return binarySearch(arr,target,start,mid-1);
    }
}

int main()
{
    int arr[] = {-1,0,3,5,9,12};
    int target = 5;
    int size = sizeof(arr)/sizeof(int);
    std::cout<<"Index of target: "<<binarySearch(arr,&target,0,size-1);
    return 0;
}