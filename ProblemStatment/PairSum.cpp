// Return pair in sorted array with target sum. The array is unique with one target sum.
// arr[] = {2,7,11,15} ; target = 9. Find the pair of two numbers, who pair = 9
// In this case, answer is {2, 7}
#include<iostream>
int main()
{
    short int arr[] = {2,7,11,15};
    short int target = 13;
    short int ansArray[2];
    //Optimal Solution
    int start = 0, end = sizeof(arr)/sizeof(short int)-1;
    while(start<end)
    {
        if(arr[start] + arr[end] == target)
        {
            ansArray[0] = arr[start];
            ansArray[1] = arr[end];
            break;
        }
        else if(arr[start]+arr[end] > target)
        {
            end--;
        }
        else if(arr[start]+arr[end] < target)
        {
            start++;
        }
    }
    std::cout<<"Pair is: "<<ansArray[0]<<" , "<<ansArray[1];
    
    // // Brute Force
    // for(short int i=0;i<sizeof(arr)/sizeof(short int);i++)
    // {
    //     for(short int j=i+1;j<sizeof(arr)/sizeof(short int);j++)
    //     {
    //         if(arr[i]+arr[j]==target)
    //         {
    //             ansArray[0] = arr[i];
    //             ansArray[1] = arr[j];
    //             break;
    //         }
    //     }
    // }
    // std::cout<<"Pair is: "<<ansArray[0]<<" , "<<ansArray[1];
    return 0;
}