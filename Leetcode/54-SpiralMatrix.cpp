// https://leetcode.com/problems/spiral-matrix/description/

#include<iostream>
#include<vector>

std::vector<int> spiralMatrix(std::vector<std::vector<int>> matrix)
{
    int rowStart=0, rowEnd=matrix.size()-1, colStart=0, colEnd=matrix[0].size()-1;
    std::vector<int> answer;
    while(rowStart<=rowEnd && colStart<=colEnd)
    {
        for(int i=colStart;i<=colEnd;i++) // Top Traversing
        {
            answer.emplace_back(matrix[rowStart][i]);
        }
        if(rowStart==rowEnd) // To avoid Bottom Traversing of same elements, leading to repetition of elements
        {
            break;
        }
        for(int i=rowStart+1;i<=rowEnd;i++) // Right Traversing
        {
            answer.emplace_back(matrix[i][colEnd]);
        }
        if(colStart==colEnd) // To avoid Left Traversing of same elements, leading to repetition of elements
        {
            break;
        }
        for(int i=colEnd-1;i>=colStart;i--) // Bottom Traversing
        {
            answer.emplace_back(matrix[rowEnd][i]);
        }
        for(int i=rowEnd-1;i>=rowStart+1;i--) // Left Traversing
        {
            answer.emplace_back(matrix[i][colStart]);
        }
        rowStart++; rowEnd--;
        colStart++; colEnd--;
    }
    return answer;
}

int main()
{
    std::vector<std::vector<int>> matrix{{{1,2,3,4},{5,6,7,8},{9,10,11,12}}};
    std::vector<int> answer = spiralMatrix(matrix);
    for(int i : answer)
    {
        std::cout<<i<<" ";
    }
    return 0;
}