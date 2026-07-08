// https://leetcode.com/problems/combination-sum/

#include<iostream>
#include<vector>

void helperFunction(std::vector<int>& candidates, int& target, std::vector<std::vector<int>>& answer, std::vector<int>& temp, int sum, int& currentPosition)
{ 
    if(sum==target)
    {
        answer.emplace_back(temp);
        return;
    }
    if(sum>target)
    {
        temp.pop_back();
        return;
    }
    sum += candidates[currentPosition];
    temp.emplace_back(candidates[currentPosition]);
    helperFunction(candidates,target,answer,temp,sum,currentPosition);
}

std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int& target)
{
    std::vector<std::vector<int>> answer;
    std::vector<int> temp;
    int currentPosition=0;
    helperFunction(candidates, target, answer, temp, 0, currentPosition);
    return answer;
}

int main()
{
    std::vector<int> candidates = {2,3,5};
    int target = 8; // Output: {{2,2,2,2}, {2,3,3}, {3,5}}
    std::vector<std::vector<int>> answer = combinationSum(candidates, target);
    std::cout<<"{ ";
    for(std::vector<int> i : answer)
    {
        std::cout<<"{ ";
        for(int j : i)
        {
            std::cout<<j<<" ";
        }
        std::cout<<"} ";
    }
    std::cout<<"}";
    return 0;
}