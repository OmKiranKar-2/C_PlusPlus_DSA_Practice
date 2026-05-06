// Check if a number is a power of 2 without any loops
#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter number to check: ";
    std::cin>>n;
    if((n&-n) ==n) std::cout<<"Power of 2";
    else std::cout<<"Not a power of 2";
}