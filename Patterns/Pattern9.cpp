// Hollow Diamond Pattern
#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0; i<n; i++) // Top Section
    {
        for(int j=0;j<n;j++) // First Quadrant Triangle
        {
            if(j==n-i-1)
            { std::cout<<"*"; }
            else
            { std::cout<<" "; }
        }
        for(int j=1;j<=i;j++) // Second Quadrant Triangle
        {
            if(j==i)
            { std::cout<<"*"; }
            else
            { std::cout<<" "; }
        }
        std::cout<<std::endl;
    }

    for(int i=1;i<n;i++) // Bottom Section
    {
        for(int j=0;j<n;j++) // Third Quadrant Triangle
        {
            if(j==i)
            { std::cout<<"*"; }
            else
            { std::cout<<" "; }
        }
        for(int j=1;j<n;j++) // Fourth Quadrant Trainagle
        {
            if(j==n-i-1)
            {std::cout<<"*";}
            else
            {std::cout<<" ";}
        }
        std::cout<<std::endl;
    }
    return 0;
}