// https://leetcode.com/problems/majority-element/
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
int main()
{
    short int arr[] = {2,2,1,1,1,2,2}; //Answer should be 2
    short int size = sizeof(arr)/sizeof(short int);

    // Moore's Voting Algorithm
    short int maxNum, count=0;
    for(int i=0;i<size;i++)
    {
        if(count==0)
        {
            maxNum=arr[i];
        }
        
        if(maxNum == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    std::cout<<maxNum;

    // // My personal another method with TC: O(n)
    // std::map<int,int> map;
    // for(int i=0;i<size;i++)
    // {
    //     map[arr[i]]++;
    //     if(map[arr[i]] > size/2)
    //     {
    //         std::cout<<arr[i];
    //         break;
    //     }
    // }

    // // Optimized Approach
    // std::sort(arr,arr+size);
    // short int count=1;
    // for(int i=0;i<size-1;i++)
    // {
    //     if(arr[i]==arr[i+1])
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         count = 1;
    //     }
    //     if(count > size/2)
    //     {
    //         std::cout<<arr[i];
    //         break;
    //     }
    // }

    // // Brute Force Approach
    // for(short int i=0;i<size;i++)
    // {
    //     short int freq = 0;
    //     for(short int j=i;j<size;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             freq++;
    //         }
    //     }
    //     if(freq > size/2)
    //     {
    //         std::cout<<arr[i];
    //         break;
    //     }
    // }

    return 0;
}