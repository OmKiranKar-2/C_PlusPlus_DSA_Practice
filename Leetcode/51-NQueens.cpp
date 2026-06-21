// https://leetcode.com/problems/n-queens/description/

#include<iostream>
#include<vector>

bool isSafe(std::vector<std::string>& tempString,int& row, int& col, int& n)
{
    for(int i=0;i<=row;i++)
    {
        if(tempString[row][i]=='Q' || tempString[i][col]=='Q')
        {
            return false;
        }
    }
    int i=1;
    while(row-i>=0 && col-i>=0)
    {
        if(tempString[row-i][col-i]=='Q')
        {
            return false;
        }
        i++;
    }
    i=1;
    while(row+i<n && col+i<n)
    {
        if(tempString[row+i][col+i]=='Q')
        {
            return false;
        }
        i++;
    }
    return true;
}

void helperFunction(int n, int row, int col, std::vector<std::string> tempString, std::vector<std::vector<std::string>>& answer, int count)
{
    if(count==n)
    {
        answer.emplace_back(tempString);
        return;
    }
    else if(count < row)
    {
        return;
    }
    if(col == n)
    {
        helperFunction(n,row+1,0,tempString,answer,count);
    }
    else if(isSafe(tempString,row,col,n))
    {
        tempString[row][col] = 'Q';
        count++;
        helperFunction(n,row+1,0,tempString,answer,count);
    }
    else
    {
        helperFunction(n,row,col+1,tempString,answer,count);
    }
}

std::vector<std::vector<std::string>> nQueens(int n)
{
    int row=0,col=0;
    std::vector<std::string> tempString(n,".");
    std::vector<std::vector<std::string>> answer;
    helperFunction(n,row,col,tempString,answer,0);
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