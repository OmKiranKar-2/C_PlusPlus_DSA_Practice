// https://leetcode.com/problems/sort-colors/description/

// Use DNF(Dutch National Flag) Sorting Algorithm
#include<iostream>
#include<algorithm>

// Optmized Approach: DNF Algorithm (as it is done in one pass instead of two) TC:O(n), SC:O(1)
void dnfSort(int* arr, int* size) // 2,0,2,1,1,0,1,2,0,0
{
    int start = 0, mid = 0, end=*size-1; //Start = 0 count, Mid = 1 count, End = 2 count
    while(mid<=end)
    {
        if(arr[mid]==0)
        {
            std::swap(arr[start],arr[mid]);
            start++; mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            std::swap(arr[end],arr[mid]);
            end--;
        }
    }
}

// //More Optimal Approach than Brute Force, TC: O(n), SC:O(1)
// void dnfSort(int* arr, int* size)
// {
//     int zeroCount=0, oneCount=0, twoCount=0;
//     for(int i=0;i<*size;i++) //TC: O(n)
//     {
//         if(arr[i]==0)
//         {
//             zeroCount++;
//         }
//         else if(arr[i]==1)
//         {
//             oneCount++;
//         }
//         else if(arr[i]==2)
//         {
//             twoCount++;
//         }
//     }
//     for(int i=0;i<*size;i++) //TC: O(n)
//     {
//         if(i<zeroCount)
//         {
//             arr[i]=0;
//         }
//         else if(i<zeroCount+oneCount)
//         {
//             arr[i]=1;
//         }
//         else
//         {
//             arr[i]=2;
//         }
//     }
// }

// Brute Force Approach-> std::sort(arr,arr+*size); // TC: O(n*logn)

int main()
{
    int arr[] = {2,0,2,1,1,0,1,2,0,0};
    int size = sizeof(arr)/sizeof(int);
    dnfSort(arr,&size);
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}