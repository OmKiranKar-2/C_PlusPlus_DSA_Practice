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