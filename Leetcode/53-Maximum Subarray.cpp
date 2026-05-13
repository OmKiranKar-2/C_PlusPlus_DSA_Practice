#include<iostream>
#include<vector>
#include<climits>
int main()
{
    // Kadane's Algorithm
    std::vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4}; //Maximum Subarray -> 4,-1,2,1 -> 6
    int max=vec[0],add=0;
    for(int i=0;i<vec.size();i++)
    {
        add += vec[i];
        if(add < vec[i]) add=vec[i];
        max = std::max(max,add);
    }
    std::cout<<"Maximum Subarray: "<<max;

    // // Brute Force
    // std::vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    // int max = INT_MIN;
    // for(int i=0;i<vec.size();i++)
    // {
    //     int temp = 0;
    //     for(int j=i;j<vec.size();j++)
    //     {
    //         temp += vec[j];
    //         max = std::max(temp,max);
            
    //     }
    // }
    // std::cout<<"Maximum subarray: "<<max;
    return 0;
}