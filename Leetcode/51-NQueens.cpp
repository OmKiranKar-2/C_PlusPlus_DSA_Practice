// https://leetcode.com/problems/n-queens/description/

#include<iostream>
#include<vector>

bool isSafe(std::vector<std::string>& tempString,int& row, int& col, int& n)
{
    for(int i=0;i<=row;i++) // Horizontal and Vertical Check
    {
        if(tempString[row][i]=='Q' || tempString[i][col]=='Q')
        {
            return false;
        }
    }
    for(int i=1;row-i>=0 && col-i>=0;i++) // Left Diagonal
    {
        if(tempString[row-i][col-i]=='Q')
        {
            return false;
        }
    }
    for(int i=1;row-i>=0 && col+i<n;i++) // Right Diagonal
    {
        if(tempString[row-i][col+i]=='Q')
        {
            return false;
        }
    }
    return true;
}

// TC: O(n!)
void helperFunction(int n, int row, std::vector<std::string>& tempString, std::vector<std::vector<std::string>>& answer)
{
    if(row==n)
    {
        answer.emplace_back(tempString);
        return;
    }
    for(int col=0;col<n;col++)
    {
        if(isSafe(tempString,row,col,n))
        {
            tempString[row][col] = 'Q';
            helperFunction(n,row+1,tempString,answer);
            tempString[row][col] = '.'; // Backtracking
        }
    }
}

std::vector<std::vector<std::string>> nQueens(int n)
{
    int row=0,col=0;
    std::vector<std::string> tempString(n,std::string(n,'.')); // Initialize every element as '.'
    std::vector<std::vector<std::string>> answer;
    helperFunction(n,row,tempString,answer);
    return answer;
}

int main()
{
    int n=4; // Output: {{".Q..","...Q","Q...","..Q."},{"..Q.","Q...","...Q",".Q.."}}
    std::vector<std::vector<std::string>> answer = nQueens(n);
    std::cout<<"{ ";
    for(std::vector<std::string> i : answer)
    {
        std::cout<<"{";
        for(std::string j: i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<"} ";
    }
    std::cout<<"}";
    return 0;
}