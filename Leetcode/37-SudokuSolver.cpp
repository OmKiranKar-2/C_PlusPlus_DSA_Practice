// https://leetcode.com/problems/sudoku-solver/description/

#include<iostream>
#include<vector>

// TC: O(9^Number of Empty Cells)
bool isSafe(std::vector<std::vector<char>>& board, int& row, int& col, int& i)
{
    for(int j=0;j<9;j++)
    {
        if(board[row][j]==i || board[j][col]==i) // Horizontal and Vertical Check
        {
            return false;
        }
    }
    for(int j = row-(row%3); j< row-(row%3)+3; j++) // Check 3x3 matrix
    {
        for(int k = col-(col%3); k< col-(col%3)+3; k++)
        {
            if(board[j][k]==i)
            {
                return false;
            }
        }
    }
    return true;
}


void helperFunction(std::vector<std::vector<char>>& board, int row, int col)
{
    int nextRow = row, nextCol = col+1;
    if(nextCol==9)
    {
        nextRow = row+1;
        nextCol = 0;
    }
    if(nextRow==9)
    {
        return;
    }
    if(board[row][col]=='.')
    {
        for(int i=1;i<=9;i++)
        {
            if(isSafe(board,row,col,i))
            {
                board[row][col]=i;
                helperFunction(board,nextRow,nextCol);
                board[row][col]='.';
            }
        }
    }
    else
    {
        helperFunction(board,nextRow,nextCol);
    }

}

void sudokuSolver(std::vector<std::vector<char>>& board)
{
    helperFunction(board,0,0);
}

int main()
{
    std::vector<std::vector<char>> board = 
                {{'5','3','.','.','7','.','.','.','.'},
                {'6','.','.','1','9','5','.','.','.'},
                {'.','9','8','.','.','.','.','6','.'},
                {'8','.','.','.','6','.','.','.','3'},
                {'4','.','.','8','.','3','.','.','1'},
                {'7','.','.','.','2','.','.','.','6'},
                {'.','6','.','.','.','.','2','8','.'},
                {'.','.','.','4','1','9','.','.','5'},
                {'.','.','.','.','8','.','.','7','9'}};
    sudokuSolver(board);
    for(std::vector<char> i : board)
    {
        for(char j : i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}