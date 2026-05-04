//Butterfly Pattern
#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++) //Top Part
    {
        for(int j=0;j<=i;j++) // First Star Triangle
        {
            std::cout<<"*";
        }
        for(int j=0;j<2*(n-i-1);j++) // Space
        {
            std::cout<<" ";
        }
        for(int j=0;j<=i;j++) // Second Star Triangle
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int i=0;i<n;i++) // Bottom Part
    {
        for(int j=i;j<n;j++) // First Star Triangle
        {
            std::cout<<"*";
        }
        for(int j=0;j<2*i;j++) // Space
        {
            std::cout<<" ";
        }
        for(int j=i;j<n;j++) // Second Star Triangle
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}