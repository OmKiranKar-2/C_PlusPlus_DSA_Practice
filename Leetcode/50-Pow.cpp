// std::pow(num,pow) -> Derivation for this
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float num; int pow;
    std::cout<<"Enter number: ";
    std::cin>>num;
    std::cout<<"Enter power: ";
    std::cin>>pow;

    // Optimized Approach

    // // Better Approach than previous one, though TC can be more optimized
    // int dupPow = pow,count=0;
    // double powSum = num, twoSum=1;
    // while(dupPow > 1 || dupPow<-1)
    // {
    //     count++;
    //     dupPow /= 2;
    // }
    // for(int i=0;i<count;i++)
    // {
    //     powSum *= powSum;
    //     twoSum *= 2;
    // }
    // if(dupPow == 1)
    // {
    //     count = pow - twoSum;
    // }
    // else
    // {
    //     count = pow + twoSum;
    //     count = -count;  
    // }
    // for(int i=0;i<count;i++)
    // {
    //     powSum *= num;
    // }
    // if(dupPow == -1)
    // {
    //     powSum = 1/powSum;
    // }
    // if(pow==0) powSum=1;
    // std::cout<<powSum;

    
    // // Longer approach -> Worse TC [Time Complexity]
    // float dupNum = num;
    // if(pow>1)
    // {
    //     for(int i=2;i<=pow;i++)
    //     {
    //         num *= dupNum;
    //     }
    // }
    // else if(pow==0)
    // {
    //     num = 1;
    // }
    // else if(pow<0)
    // {
    //     for(int i=0;i>=pow;i--)
    //     {
    //         num *= 1/dupNum;
    //     }
    // }
    // std::cout<<num;
    return 0;
}