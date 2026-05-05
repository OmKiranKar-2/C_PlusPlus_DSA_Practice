// Function with paramters
#include<iostream>

int sum1(int a, int b) // Parameters
{
    return a+b;
}

int min1(int a, int b)
{
    if(a>b) return a;
    else if(b>a) return b;
    return 0;
}

int main()
{
    std::cout<<"Sum: "<<sum1(3,4)<<std::endl;
    std::cout<<"Min: "<<min1(5,6); // Arguments
    return 0;
}