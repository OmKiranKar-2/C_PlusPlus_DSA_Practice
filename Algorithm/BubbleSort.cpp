// Compare adjacent elements
// Push the larger element at last
// TC: O(n^2)
#include<iostream>

void printArray(int* arr,int* size)
{
    for(int i=0;i<*size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}

void bubbleSort(int* arr, int* size) // Sorting in ascending order
{
    for(int i=0;i<*size-1;i++)
    {
        bool anyChange=false; // To avoid checking arrays that has already been sorted
        for(int j=0;j<*size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
                anyChange=true;
            }
        }
        if(!anyChange) break; // Array is already sorted
    }
    printArray(arr,size);
}

int main()
{
    int arr[] = {4,6,5,2,3,1};
    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr,&size);
    return 0;
}