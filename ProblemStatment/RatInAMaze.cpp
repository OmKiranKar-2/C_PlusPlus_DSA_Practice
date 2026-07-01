// Use Recursion Backtracking Approach

/*
Question:
We has a matrix of n*n. The elements in the matrix are either 0 or 1.
Return the total number of possible ways to travel from start position of (0,0) to end position of (n-1,n-1).
You can take 4 path to travel: Up, Down, Left or Right. Diagonal movement is not allowed.
Condition: You cannot travel through cell having element 0, you can only travel by cell having element 1.
You can travel through one cell only one time in one possible way.
*/

#include<iostream>
#include<vector>

void helperFunction(std::vector<std::vector<int>>& maze, std::string& tempString, std::vector<std::string>& answer, int row, int col)
{
    if(row == maze.size()-1 && col == maze.size()-1)
    {
        answer.emplace_back(tempString);
        return;
    }
    // if(col == -1 || col == maze.size() || row==-1 || row==maze.size())
    // {
    //     return;
    // }
    if(col<maze.size()-1 && maze[row][col+1] == 1) // Right Column
    {
        tempString += 'R';
        helperFunction(maze, tempString, answer, row, col+1);
        tempString.pop_back();
    }
    if(row<maze.size()-1 && maze[row+1][col] == 1) // Down Row
    {
        tempString += 'D';
        helperFunction(maze, tempString, answer, row+1, col);
        tempString.pop_back();
    }
    // if(col > 0 && maze[row][col-1] == 1) // Left Column
    // {
    //     tempString += 'L';
    //     helperFunction(maze, tempString, answer, row, col-1);
    //     tempString.pop_back();
    // }
    // if(row > 0 && maze[row-1][col] == 1) // Up Row
    // {
    //     tempString += 'U';
    //     helperFunction(maze, tempString, answer, row-1, col);
    //     tempString.pop_back();
    // }
}

std::vector<std::string> ratInMaze(std::vector<std::vector<int>>& maze)
{
    std::vector<std::string> answer;
    std::string tempString;
    helperFunction(maze, tempString, answer, 0, 0);
    return answer;
}

int main()
{
    std::vector<std::vector<int>> maze;
    maze = {{1,0,0,0},
            {1,1,0,1},
            {1,1,0,0},
            {0,1,1,1}}; // Output: {"DDRDRR","DRDDRR"}
    std::vector<std::string> answer = ratInMaze(maze);
    for(std::string i : answer)
    {
        std::cout<<i<<" ";
    }
    return 0;
}