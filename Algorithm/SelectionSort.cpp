// Divide array in sorted and unsorted part
// Pick smallest element from unsorted part and move to sorted part
// n-1 iterations
// TC: O(n^2)
#include<iostream>

void selectionSort(int* arr, int* size)
{
    for(int i=0;i<*size-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<*size;j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex = j;
            }
        }
        std::swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    int arr[] = {4,6,5,2,3,1};
    int size = sizeof(arr)/sizeof(int);
    selectionSort(arr,&size);
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}