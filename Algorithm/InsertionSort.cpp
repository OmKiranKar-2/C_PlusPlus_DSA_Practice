// Divide array in sorted and unsorted part
// Initially assume that first element is sorted and rest element is unsorted
// Compare unsorted element and check if it lies before or after the sorted element
// TC: O(n^2)
// Best Algorithm against Bubble Sort and Selection Sort
#include<iostream>

void insertionSort(int* arr,int* size)
{
    for(int i=1;i<*size;i++)
    {
        int temp=arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j+1]<arr[j]) // if(temp<arr[j]) is also correct
            {
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            else
            {
                break;
            }
        }
    }
}

// // Same approach using while loop
// void insertionSort(int* arr,int* size)
// {
//     for(int i=1;i<*size;i++)
//     {
//         int temp=arr[i], j=i-1;
//         while(j>=0 && temp<arr[j])
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//     }
// }

// My initial approach which is also correct, but it may not be easy to read
// void insertionSort(int* arr,int* size)
// {
//     for(int i=1;i<*size;i++)
//     {
//         int sortedFlag = i;
//         for(int j=0;j<i;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 int temp = arr[i];
//                 while(sortedFlag!=j)
//                 {
//                     arr[sortedFlag] = arr[sortedFlag-1];
//                     sortedFlag--;
//                 }
//                 arr[j] = temp;
//                 break;
//             }
//         }
//     }
// }

// // Easier Correct Implementation. It is more of a hybrid Insertion Sort, not the standard one.
// void insertionSort(int* arr, int* size)
// {
//     for(int i=1;i<*size;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 std::swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

int main()
{
    int arr[] = {7,4,6,5,2,3,1};
    int size = sizeof(arr)/sizeof(int);
    insertionSort(arr,&size);
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}