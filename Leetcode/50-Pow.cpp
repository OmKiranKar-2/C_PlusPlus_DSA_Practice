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

    // Optimized Approach -> Take binary form of the power -> TC: O(log n)
    double powSum = 1;
    if(pow < 0)
    {
        num = 1/num;
        pow = -pow;
    }
    while(pow>0)
    {
        if(pow%2==1)
        {
            powSum *= num;
        }
        num *= num;
        pow /=2;
    }
    std::cout<<powSum;

    // // More clean code but TC is similar as previous one
    // double powSum = num; int i;
    // if(pow<0)
    // {
    //     pow = -pow;
    //     powSum = 1/powSum;
    //     num = 1/num;
    // }
    // for(i=2;i<=pow;i *= 2)
    // {
    //     powSum *= powSum;
    // }
    // i = i/2;
    // for(int j=0;j<pow-i;j++)
    // {
    //     powSum *= num;
    // }
    // if(pow == 0) powSum==1;
    // std::cout<<powSum;


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