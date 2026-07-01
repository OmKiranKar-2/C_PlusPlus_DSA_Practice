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

void helperFunction(std::vector<std::vector<int>>& maze, std::string tempString, std::vector<std::string>& answer, int row, int col)
{
    if(row == maze.size()-1 && col == maze.size()-1)
    {
        answer.emplace_back(tempString);
        return;
    }
    if(col == -1 || col == maze.size() || row==-1 || row==maze.size() || maze[row][col]==0 || maze[row][col]==-1)
    {
        return;
    }
    maze[row][col] = -1;
    helperFunction(maze, tempString+"R", answer, row, col+1); // Right Column
    helperFunction(maze, tempString+"D", answer, row+1, col); // Down Row
    helperFunction(maze, tempString+"L", answer, row, col-1); // Left Column
    helperFunction(maze, tempString+"U", answer, row-1, col); // Up Row
    maze[row][col] = 1;
}

// TC: O(4^(n*n))
std::vector<std::string> ratInMaze(std::vector<std::vector<int>>& maze)
{
    std::vector<std::string> answer;
    helperFunction(maze, "", answer, 0, 0);
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