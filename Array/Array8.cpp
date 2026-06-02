// 2-D Array: Diagnoal Sum in a square matrix
#include<iostream>

int diagonalSum(int arr[][4])
{
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum += arr[i][i] + arr[i][4-i-1];
    }
    if(4%2==1)
    {
        sum -= arr[4/2][4/2];
    }
    return sum;
}

int main()
{
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; // Answer: (1+6+11+16) + (4+7+10+13) = 68
    // Or int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Answer: (1+5+9) + (3+5+7) - 5 = 25
    std::cout<<"Both Diagonal Sum is: "<<diagonalSum(arr);
    return 0;
}