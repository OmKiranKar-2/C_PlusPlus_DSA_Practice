// https://leetcode.com/problems/merge-sorted-array/description/
#include<iostream>

// Optimzed Approach with TC: O(m+n), SC:O(1)
void sortTwoArray(int* arr1, int m, int*arr2, int n)
{
    int index1=m-1, index2=n-1;
    int total = m+n-1;
    while(index1>=0 && index2>=0)
    {
        if(arr1[index1]<=arr2[index2])
        {
            arr1[total] = arr2[index2];
            total--;
            index2--;
        }
        else if(arr1[index1]>arr2[index2])
        {
            arr1[total] = arr1[index1];
            total--;
            index1--;
        }
    }
    while(index2>=0)
    {
        arr1[index2] = arr2[index2]; // or arr1[total] = arr2[index2]; total--; index2--;
        index2--;
    }
}

// // Approach with thrid array, TC: O(m+n), SC: 0(m+n)
// void sortTwoArray(int* arr1, int m, int*arr2, int n)
// {
//     int arr3[m+n];
//     int index1=0,index2=0,index3=0;
//     while(index1<m && index2<n)
//     {
//         if(arr1[index1]<=arr2[index2])
//         {
//             arr3[index3++] = arr1[index1++];
//         }
//         else if(arr1[index1]>arr2[index2])
//         {
//             arr3[index3++] = arr2[index2++];
//         }
//     }
//     while(index1<m)
//     {
//         arr3[index3++] = arr1[index1++];
//     }
//     while(index2<m)
//     {
//         arr3[index3++] = arr2[index2++];
//     }
// }

// // Another Approach I devised with TC: 0(m*n), SC: O(1)
// void sortTwoArray(int* arr1, int m, int*arr2, int n)
// {
//     int index1 = 0, index2=0;
//     int totalSize=m+n;
//     while(index1<m && index2<n)
//     {
//         if(arr1[index1]<=arr2[index2])
//         {
//             index1++;
//         }
//         else if(arr1[index1]>arr2[index2])
//         {
//             for(int i=m;i>index1;i--)
//             {
//                 arr1[i] = arr1[i-1];
//             }
//             arr1[index1]=arr2[index2];
//             index1++; index2++;
//             m++;
//         }
//     }
//     while(m<totalSize)
//     {
//         arr1[m] = arr2[index2];
//         index1++;
//         index2++;
//         m++;
//     }
// }

int main()
{
    int arr1[] = {1,2,3,0,0,0} , m=3; // arr1 has a size of m+n
    int arr2[] = {2,5,6} , n=3; //Output: (1,2,2,3,5,6}
    sortTwoArray(arr1,m,arr2,n);
    for(int i=0;i<m+n;i++)
    {
        std::cout<<arr1[i]<<" ";
    }
    return 0;
}