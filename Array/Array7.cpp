// 2-D Array: Maximum Row Sum
#include<iostream>
#include<climits>

int maxSum(int arr[][3])
{
    int maxSum=INT_MIN;
    for(int i=0;i<4;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum += arr[i][j];
        }
        maxSum = std::max(sum,maxSum);
    }
    return maxSum;
}

int main()
{
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    std::cout<<"Maximum Row Sum: "<<maxSum(arr);
    return 0;
}