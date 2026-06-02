// 2-D Array: Linear Search
#include<iostream>

std::pair<int,int> linearSearch(int arr[][3], int target)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==target) return {i,j};
        }
    }
    return {-1,-1};
}

int main()
{
    // LinearSearch
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}, target=8;
    int rowSize = sizeof(arr)/sizeof(arr[0]); //4
    int colSize = sizeof(arr[0])/sizeof(int); //3
    std::pair<int,int> p = linearSearch(arr,target);
    std::cout<<"Index is: "<<p.first<<", "<<p.second;
    return 0;
}