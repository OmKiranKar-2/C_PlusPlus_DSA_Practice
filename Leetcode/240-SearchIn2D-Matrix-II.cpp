// https://leetcode.com/problems/search-a-2d-matrix-ii/

#include<iostream>
#include<vector>

int searchInRow(std::vector<int> row, int rowSize, int target)
{
    int start=0,end=rowSize-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(row[mid]==target)
        {
            return mid;
        }
        else if(row[mid]>target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

std::pair<int,int> twoDSearch(std::vector<std::vector<int>> matrix,int target)
{
    int rowSize = matrix.size(), colSize = matrix[0].size();
    // Consider the corner element as mid as from there you can either go left or bottom
    // Mid can be (0,colSize-1) or (rowSize-1,0)
    int row = 0, col=colSize-1;
    while(row<rowSize && col>=0)
    {
        if(matrix[row][col]==target)
        {
            return {row,col};
        }
        else if(matrix[row][col]>target)
        {
            col--;
        }
        else if(matrix[row][col]<target)
        {
            row++;
        }
    }
    return {-1,-1};
}

int main()
{
    std::vector<std::vector<int>> matrix{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    std::pair<int,int> idx = twoDSearch(matrix,target);
    std::cout<<"Index of target: "<<idx.first<<", "<<idx.second;
    return 0;
}