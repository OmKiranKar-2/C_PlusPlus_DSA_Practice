#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<i;j++) //Add space
        {
            std::cout<<" ";
        }
        for(int j=i;j<n;j++) // Print Number
        {
            std::cout<<i+1;
        }
        std::cout<<std::endl;
    }
    return 0;
}