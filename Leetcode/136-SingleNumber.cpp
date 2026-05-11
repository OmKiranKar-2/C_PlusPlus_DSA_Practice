// https://leetcode.com/problems/single-number/description/
#include<iostream>
#include<vector>

int singleNumber(const std::vector<int>& vec) // const prevents modifying vector
{
    short int x=0;
    for(int i:vec)
    {
        x = x^i;
    }
    // for(short int i=0;i<vec.size();i++)
    // {
    //     x = x^vec.at(i);
    // }
    return x;
}

int main()
{
    std::vector<int> vec = {1,2,1,4,2};
    std::cout<<"Single Number: "<<singleNumber(vec);
    return 0;
}

// int singleNumber(const std::vector<int>& vec)
// {
//     for(int i=0;i<vec.size();i++)
//     {
//         bool c= true;
//         for(int j=0;j<vec.size();j++)
//         {
//             if(i==j) continue;
//             if(vec.at(i)==vec.at(j)) 
//             {
//                 c=false;
//                 break;
//             }
//         }
//         if(c==true) return vec[i];
//     }
//     return -1;
// }