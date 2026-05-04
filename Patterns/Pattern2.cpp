#include<iostream>
int main()
{
    int n,printNum=0,j=8;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cout<<char('A'+printNum++)<<" ";
        }
        std::cout<<std::endl;
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     { std::cout<<j+(i*n)<<" "; }
    //     std::cout<<std::endl;
    // }
    return 0;
}