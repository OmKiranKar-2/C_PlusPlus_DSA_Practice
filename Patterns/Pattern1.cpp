#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cout<<char(j+'A')<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}