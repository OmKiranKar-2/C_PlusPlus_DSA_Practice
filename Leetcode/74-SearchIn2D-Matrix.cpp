// https://leetcode.com/problems/search-a-2d-matrix/description/

#include<iostream>
#include<vector>

// Use Binary Search-> TC: O(log(m*n))
std::pair<int,int> twoDSearch(std::vector<std::vector<int>> matrix,int target)
{
    int rowFlag=-1;
    int rowStart=0,rowEnd=matrix.size();
    while(rowStart<=rowEnd) // Search Vertically and get rowFlag
    {
        int rowMid = rowStart + (rowEnd-rowStart)/2;
        if(matrix[rowMid][0]<target)
        {
            rowFlag = rowMid;
            rowStart = rowMid+1;
        }
        else if(matrix[rowMid][0]>target)
        {
            rowEnd = rowMid-1;
        }
        else
        {
            return {rowMid,0};
        }
    }
    if(rowFlag==-1)
    {
        return {-1,-1};
    }
    int colStart = 0, colEnd = matrix[rowFlag].size()-1;
    while(colStart<=colEnd) // Search horizontally
    {
        int colMid = colStart + (colEnd-colStart)/2;
        if(matrix[rowFlag][colMid]<target)
        {
            colStart = colMid+1;
        }
        else if(matrix[rowFlag][colMid]>target)
        {
            colEnd = colMid-1;
        }
        else
        {
            return {rowFlag,colMid};
        }
    }
    return {-1,-1};
}

int main()
{
    std::vector<std::vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 16;
    std::pair<int,int> idx = twoDSearch(matrix,target);
    std::cout<<"Index of target: "<<idx.first<<", "<<idx.second;
    return 0;
}