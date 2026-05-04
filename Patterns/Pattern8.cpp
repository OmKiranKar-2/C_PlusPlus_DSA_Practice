// Pyramid Pattern
#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++) // Space
        {
            std::cout<<" ";
        }
        for(int j=0;j<=i;j++) // First triangle
        {
            std::cout<<j+1;
        }
        for(int j=i;j>0;j--) // Second triangle
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    return 0;
}