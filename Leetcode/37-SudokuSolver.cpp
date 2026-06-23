// https://leetcode.com/problems/sudoku-solver/description/

#include<iostream>
#include<vector>

// TC: O(9^Number of Empty Cells)

void helperFunction(std::vector<std::vector<char>>& board, int& row, int& col)
{

}

void sudokuSolver(std::vector<std::vector<char>>& board)
{
    
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