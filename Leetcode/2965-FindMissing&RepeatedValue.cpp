// https://leetcode.com/problems/find-missing-and-repeated-values/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

// Approach using unordered_set: TC: O(n*n)
std::pair<int,int> findMissingNRepeat(std::vector<std::vector<int>>& grid)
{
    std::unordered_set<int> s;
    std::pair<int,int> answer;
    int actualSum=0, n=grid.size();
    int expectedSum = (n*n)*(n*n + 1)/2; // Sum from 1 to n should be (n*(n+1))/2, so for n^2
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            actualSum += grid[i][j];
            if(s.find(grid[i][j])!=s.end())
            {
                answer.first = grid[i][j]; // Repeated Element
            }
            s.emplace(grid[i][j]);
        }
    }
    answer.second = expectedSum + answer.first - actualSum; // Missing Element
    return answer;
}

// // Another Approach Using Unordered Map: TC: O(n^2)
// std::pair<int,int> findMissingNRepeat(std::vector<std::vector<int>>& grid)
// {
//     int size = grid.size();
//     std::unordered_map<int,int> m;
//     std::pair<int,int> answer;
//     for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             m[grid[i][j]]++;
//         }
//     }
//     for(int i=1;i<=size*size;i++)
//     {
//         if(m.find(i)==m.end())
//         {
//             answer.second = i;
//         }
//         else if(m[i] == 2)
//         {
//             answer.first = i;
//         }
//     }
//     return answer;
// }

int main()
{
   std::vector<std::vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}}; // Output: {9,5} as 9 is repeated & 5 is missing
   std::pair<int,int> p = findMissingNRepeat(grid);
   std::cout<<"Repeated & Missing Value: "<<p.first<<" "<<p.second;
    return 0;
}