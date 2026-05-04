// Hollow Diamond Pattern - Alternate
#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++) // Top Part
    {
        for(int j=0;j<n-i-1;j++) // Spaces before *
        {
            std::cout<<" ";
        }
        std::cout<<"*";
        for(int j=0;j<(2*i)-1;j++) // Spaces after *
        {
            std::cout<<" ";
        }
        if(i!=0) std::cout<<"*";
        std::cout<<std::endl;
    }

    for(int i=1;i<n;i++) // Bottom Part
    {
        for(int j=0;j<i;j++) // Spaces before *
        {
            std::cout<<" ";
        }
        std::cout<<"*";
        for(int j=0;j<2*(n-i)-3;j++)
        {
            std::cout<<" ";
        }
        if(i!=n-1) std::cout<<"*";
        std::cout<<std::endl;
    }
    return 0;
}