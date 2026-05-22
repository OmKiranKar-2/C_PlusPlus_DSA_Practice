// Returns the index of the target if available else, return -1
#include<iostream>

int binarySearch(int* arr, int* target, int& size)
{
    int start = 0, end = size - 1;
    while(start<=end) // TC: O(logn)
    {
        //int mid = (start+end)/2;
        int mid = start + (end-start)/2; // More optimized to avoid Integer Overflow for larger int values, if start and end have INT_MAX values
        if(arr[mid]==*target)
        {
            return mid;
        }
        else if(*(arr+mid) > *target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-1,0,3,4,6,9,12}; // Array should be sorted
    int target = 9;
    int size = sizeof(arr)/sizeof(int);
    std::cout<<"Index is: "<<binarySearch(arr,&target,size);
    return 0;
}